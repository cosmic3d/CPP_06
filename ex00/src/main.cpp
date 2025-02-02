/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:22:11 by jenavarr          #+#    #+#             */
/*   Updated: 2025/02/02 16:22:39 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

int main( int ac, char **av )
{
	if ( ac != 2 )
	{
		std::cerr << "Usage: ./convert [value]" << std::endl;
		return ( 1 );
	}
	ScalarConverter::convert(av[1]);
	return ( 0 );
}