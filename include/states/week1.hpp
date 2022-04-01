#pragma once
#include "engine/Common.hpp"
#include "states/State.hpp"
#include "engine/Sprite.hpp"
#include "audio/Audio.hpp"
#include "core/Paths.hpp"
#include "engine/Text.hpp"
#include "engine/Engine.hpp"

namespace States
{
    class week1 : public Engine::State
    {
    private:
    public:
        Audio::Audio* inst, *voices;
        Engine::Sprite *bf, *gf, *dad;
        week1(){};
        ~week1(){};
        void create() override;
        void update() override;
    };
}
