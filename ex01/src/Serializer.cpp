/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:39:15 by jenavarr          #+#    #+#             */
/*   Updated: 2025/02/02 17:39:15 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../inc/Serializer.hpp"

// Static method to serialize a Data pointer to uintptr_t
uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t >(ptr);
}
// Static method to deserialize a uintptr_t to a Data pointer
Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}