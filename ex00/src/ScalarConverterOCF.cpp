/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterOCF.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:39:51 by jenavarr          #+#    #+#             */
/*   Updated: 2025/02/02 17:41:04 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/ScalarConverter.hpp"

// CONSTRUCTORS AND DESTRUCTORS
// ============================

ScalarConverter::ScalarConverter()
{
    return ; 
}

ScalarConverter::ScalarConverter( const ScalarConverter & src )
{
    (void)src;
    return ; 
}

ScalarConverter::~ScalarConverter()
{
    return ; 
}

// OPERATORS OVERLOAD
// ==================

ScalarConverter & ScalarConverter::operator=( const ScalarConverter & rhs )
{
    (void)rhs;
    return *this;
}