#include <SDL.h>

int main() {
  SDL_Init(SDL_INIT_VIDEO);
  auto *window = SDL_CreateWindow("application", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 300, 300, SDL_WINDOW_RESIZABLE);

  SDL_Event event {0};
  while (event.type != SDL_QUIT) {
    SDL_WaitEvent(&event);
  }

  SDL_DestroyWindow(window);
  SDL_Quit();
}
