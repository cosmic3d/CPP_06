#include "../inc/Base.hpp"
#include "../inc/generate.hpp"
#include "../inc/identify.hpp"
#include <iostream>

int main() {
    // Generate a random object
    Base* obj = generate();

    // Identify the object using the pointer version
    std::cout << "Identifying using pointer: ";
    identify(obj);

    // Identify the object using the reference version
    std::cout << "Identifying using reference: ";
    identify(*obj);

    // Clean up
    delete obj;

    return 0;
}