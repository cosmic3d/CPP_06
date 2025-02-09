#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"
#include "../inc/identify.hpp"
#include <iostream>

void identify(Base* p) {
		if (dynamic_cast<A*>(p)) {
				std::cout << "A" << std::endl;
		} else if (dynamic_cast<B*>(p)) {
				std::cout << "B" << std::endl;
		} else if (dynamic_cast<C*>(p)) {
				std::cout << "C" << std::endl;
		} else {
				std::cout << "Unknown type" << std::endl;
		}
}

void identify(Base& p) {
		try {
				(void)dynamic_cast<A&>(p);
				std::cout << "A" << std::endl;
		} catch (...) {
				try {
						(void)dynamic_cast<B&>(p);
						std::cout << "B" << std::endl;
				} catch (...) {
						try {
								(void)dynamic_cast<C&>(p);
								std::cout << "C" << std::endl;
						} catch (...) {
								std::cout << "Unknown type" << std::endl;
						}
				}
		}
}