#pragma once
# include <iostream>
# include <stdint.h>// For uintptr_t

struct Data {
    int value1;
    double value2;
    std::string name;
};

class Serializer {
private:
    // Make the constructor private to prevent instantiation
    // CONSTURCTORS AND DESTRUCTORS
  	// ============================
    
    Serializer();
    Serializer( Serializer const & src );
    ~Serializer(); // Virtual destructor

    // OPERATORS OVERLOAD
    // ==================

    Serializer & operator=( Serializer const & rhs );

public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};