#pragma once
#include "../Pokemon.h"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Balbasaur : public Pokemon {
        private:
            void vineWhip(Pokemon& target);

        public:
            Balbasaur();

        };

    }
}