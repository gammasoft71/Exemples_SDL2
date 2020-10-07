#include <string>
#include <SDL.h>
#include <SDL_ttf.h>

std::string get_default_gui_font_name() {
  std::string platform_name = SDL_GetPlatform();
  if (platform_name == "Windows") return "Resources/SegoeUI.ttf";
  if (platform_name == "Mac OS X" || platform_name == "IOS") return "../Resources/SFNS.ttf";
  return "Resources/Cantarell-Regular.ttf";
}

float points_to_native_font_graphics_untit(float size) {
  return SDL_GetPlatform() == std::string("Mac OS X") ? size / 72.0f * 96.0f : size;
}

int main() {
  SDL_Init(SDL_INIT_VIDEO);
  TTF_Init();

  auto window = SDL_CreateWindow("Hello world", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 300, 300, SDL_WINDOW_RESIZABLE);
  auto renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  
  auto font = TTF_OpenFont(get_default_gui_font_name().c_str(), points_to_native_font_graphics_untit(32));
  TTF_SetFontStyle(font, TTF_STYLE_BOLD|TTF_STYLE_ITALIC);
  
  auto message = "Hello, World!";
  auto surface_message = TTF_RenderText_Solid(font, message, {0, 128, 0});
  auto texture_message = SDL_CreateTextureFromSurface(renderer, surface_message);
  auto message_witdh = 0, message_height = 0;
  TTF_SizeText(font, message, &message_witdh, &message_height);
  auto texture_message_rect = SDL_Rect {5, 100, message_witdh, message_height};
  
  auto event = SDL_Event {0};
  while (event.type != SDL_QUIT) {
    SDL_SetRenderDrawColor(renderer, 50, 50, 50, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture_message, nullptr, &texture_message_rect);
    SDL_RenderPresent(renderer);
    
    SDL_WaitEvent(&event);
  }
  
  SDL_FreeSurface(surface_message);
  SDL_DestroyTexture(texture_message);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  
  TTF_Quit();
  SDL_Quit();
}
