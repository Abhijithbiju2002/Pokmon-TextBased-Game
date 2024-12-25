#pragma once
#include "../Pokemon.h"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Pidgey : public Pokemon {
        private:
            Pidgey();
            void wingAttack(Pokemon& target);


        public:
            Pidgey();
        };

    }
}