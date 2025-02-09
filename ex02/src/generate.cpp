#include "../inc/generate.hpp"

Base* generate(void) {
		// Seed the random number generator
		std::srand(std::time(0));

		// Generate a random number between 0 and 2
		int random = std::rand() % 3;

		// Instantiate A, B, or C based on the random number
		switch (random) {
				case 0:
						return new A();
				case 1:
						return new B();
				case 2:
						return new C();
		}
		return NULL;
}