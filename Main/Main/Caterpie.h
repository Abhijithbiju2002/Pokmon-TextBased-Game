#pragma once
#include "Pokemon.h"

namespace N_Pokemon {
	namespace N_Pokemons {
		class Caterpie :public Pokemon {
		public:
			Caterpie();
			void attack(Move selectedMove, Pokemon* target) override;
		};
	}
}
