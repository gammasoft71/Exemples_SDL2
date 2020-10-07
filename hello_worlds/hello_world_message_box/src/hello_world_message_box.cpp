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
  auto window = SDL_CreateWindow("Hello world (Message box)", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 300, 300, SDL_WINDOW_RESIZABLE);
  auto renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);
  auto font = TTF_OpenFont(get_default_gui_font_name().c_str(), points_to_native_font_graphics_untit(10));

  auto button_pressed = false;
  auto button_hover = false;
  auto button_title = "Click me";
  SDL_Surface* surface_button_title = TTF_RenderText_Solid(font, button_title, {255, 255, 255});
  SDL_Texture* texture_button_title = SDL_CreateTextureFromSurface(renderer, surface_button_title);
  auto button_title_witdh = 0, button_title_height = 0;
  TTF_SizeText(font, button_title, &button_title_witdh, &button_title_height);
  SDL_Rect button_rect {10, 10, 75, 21};
  SDL_Rect texture_button_title_rect {10 + (button_rect.w - button_title_witdh) / 2, 10 + (button_rect.h - button_title_height) / 2, button_title_witdh, button_title_height};

  SDL_Event event {0};
  while (event.type != SDL_QUIT) {
    SDL_SetRenderDrawColor(renderer, 50, 50, 50, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
    if (button_hover) SDL_SetRenderDrawColor(renderer, 0, 122, 255, 255);
    else SDL_SetRenderDrawColor(renderer, 255, 255, 255, 35);
    SDL_RenderFillRect(renderer, &button_rect);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 128);
    SDL_RenderDrawRect(renderer, &button_rect);
    SDL_SetRenderDrawColor(renderer, 50, 50, 50, SDL_ALPHA_OPAQUE);
    SDL_RenderCopy(renderer, texture_button_title, nullptr, &texture_button_title_rect);
    SDL_RenderPresent(renderer);
    
    if (SDL_PollEvent(&event)) {
      if (event.type == SDL_MOUSEBUTTONDOWN) {
        auto mouse_location = SDL_Point {event.button.x, event.button.y};
        button_hover = button_pressed = SDL_PointInRect(&mouse_location, &button_rect);
      } else if (event.type == SDL_MOUSEBUTTONUP) {
        auto mouse_location = SDL_Point {event.button.x, event.button.y};
        if (SDL_PointInRect(&mouse_location, &button_rect)) SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "", "Hello, World!",  nullptr);
        button_hover = button_pressed = false;
      } else if (event.type == SDL_MOUSEMOTION) {
        auto mouse_location = SDL_Point {event.button.x, event.button.y};
        button_hover = button_pressed && SDL_PointInRect(&mouse_location, &button_rect);
      }
    }
  }
  
  SDL_FreeSurface(surface_button_title);
  SDL_DestroyTexture(texture_button_title);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  TTF_Quit();
  SDL_Quit();
}
