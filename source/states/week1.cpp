#include "states/week1.hpp"
#include <stdio.h>

namespace States
{
    void week1::create()
    {
        Engine::Sprite* stageBack = new Engine::Sprite(getImage("stages/stageback"));
        stageBack->w = (int)(stageBack->w * 0.6f);
        stageBack->h = (int)(stageBack->h * 0.6f);
        
        Engine::Sprite* stageFront = new Engine::Sprite(getImage("stages/stagefront"));
        stageFront->w = (int)(stageFront->w * 0.6f);
        stageFront->h = (int)(stageFront->h * 0.6f);
        stageFront->y = 400;
        stageFront->x = -100;

        Engine::Sprite* stageCurtains = new Engine::Sprite(getImage("stages/stagecurtains"));
        stageCurtains->w = (int)(stageCurtains->w * 0.53);
        stageCurtains->h = (int)(stageCurtains->h * 0.6f);

        Audio::Audio* inst = new Audio::Audio("week1/bopeebo/Inst", true);
        Audio::Audio* voices = new Audio::Audio("week1/bopeebo/Voices", true);
        Engine::Sprite* bf = new Engine::Sprite(getImage("boyfriend"));
        bf->parseSparrowSpritesheet(getXML("boyfriend"), 24, "BF idle dance", true);     
        bf->w = (int)(bf->w * 0.6f);
        bf->h = (int)(bf->h * 0.6f);

        voices->playMusic(false);
        inst->playMusic(false);

        add(stageBack);
        add(stageFront);
        add(stageCurtains);

        add(bf);
    }
    
    void week1::update()
    {
        State::update();
    }
}