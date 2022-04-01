//#include "engine/Engine.hpp"
#include <SDL2/SDL.h>
#include "engine/Engine.hpp"
#include "states/TitleState.hpp"
#include "states/MainMenuState.hpp"
#include "states/PlayState.hpp"
#include "states/week1.hpp"
#define SDL_MAIN_HANDLED

Engine::launchOptions launch = {
    "Friday Night Funkin' SDL2",
    1280,
    720
};

int main(){
    Engine::initialize(launch, new States::MainMenuState());
    return 0;
}