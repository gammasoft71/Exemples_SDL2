#include <SDL.h>

int main() {
  SDL_Init(SDL_INIT_VIDEO);
  SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "", "Hello, World!",  nullptr);
  SDL_Quit();
}
