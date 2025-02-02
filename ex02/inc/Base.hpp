#pragma once
class Base {
public:
		// CONSTURCTORS AND DESTRUCTORS
  	// ============================
    
    Base();
    Base( Base const & src );
    virtual ~Base(); // Virtual destructor

    // OPERATORS OVERLOAD
    // ==================

    Base & operator=( Base const & rhs );
};