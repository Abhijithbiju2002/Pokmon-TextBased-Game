#pragma once
#pragma once
#include "../Pokemon.h"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Pikachu : public Pokemon {
        private:
            Pikachu();
            void thunderShock(Pokemon* target);

        public:
            Pikachu();
        };

    }
}
