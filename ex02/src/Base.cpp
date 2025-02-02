#include "../inc/Base.hpp"

Base::Base()
{
    return ;
}

Base::Base(Base const & src)
{
    (void)src;
    return ;
}

Base::~Base()
{
    return ;
}

// OPERATORS OVERLOAD
// ===================

Base & Base::operator=(Base const & rhs)
{
    (void)rhs;
    return (*this);
}