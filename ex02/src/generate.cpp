#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

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