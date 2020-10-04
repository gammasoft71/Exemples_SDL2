#include <SDL.h>
#include <SDL_ttf.h>

int main() {
  SDL_Init(SDL_INIT_VIDEO);
  TTF_Init();
  auto *window = SDL_CreateWindow("Hello world", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 300, 300, SDL_WINDOW_RESIZABLE);
  auto *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  TTF_Font* sans = TTF_OpenFont("/System/Library/Fonts/Supplemental/Arial Bold Italic.ttf", 32);
  SDL_Surface* surface_message = TTF_RenderText_Solid(sans, "Hello, World!", {0, 128, 0});
  SDL_Texture* texture_message = SDL_CreateTextureFromSurface(renderer, surface_message);
  SDL_Rect texture_message_rect {0, 100, 300, 50};
  
  auto quit = false;
  SDL_Event event {0};
  while (!(quit = event.type == SDL_QUIT)) {
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
