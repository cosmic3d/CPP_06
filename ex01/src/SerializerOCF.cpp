/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SerializerOCF.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:39:08 by jenavarr          #+#    #+#             */
/*   Updated: 2025/02/02 17:39:09 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Serializer.hpp"

// CONSTURCTORS AND DESTRUCTORS
// ============================

Serializer::Serializer()
{
    return ;
}

Serializer::Serializer(Serializer const & src)
{
    (void)src;
    return ;
}

Serializer::~Serializer()
{
    return ;
}

// OPERATORS OVERLOAD
// ===================

Serializer & Serializer::operator=(Serializer const & rhs)
{
    (void)rhs;
    return (*this);
}