/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:37:11 by jenavarr          #+#    #+#             */
/*   Updated: 2025/02/02 18:17:09 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
#pragma once
# include <limits>
# include <cmath>
# include <iomanip>
# include <sstream>

static class ScalarConverter
{
		public:
				static void convert(std::string str);
		private:
				// Make the constructor private to prevent instantiation
				// CONSTURCTORS AND DESTRUCTORS
				// ============================
				
				ScalarConverter();
				ScalarConverter( ScalarConverter const & src );
				~ScalarConverter(); // Virtual destructor

				// OPERATORS OVERLOAD
				// ==================

				ScalarConverter & operator=( ScalarConverter const & rhs );
				static bool Is_Char(std::string str);
				static bool Is_Int(std::string str);
				static bool Is_Float(std::string str);
				static bool Is_Double(std::string str);
				static void Convert_Char(std::string str);
				static void Convert_Int(std::string str);
				static void Convert_Float(std::string str);
				static void Convert_Double(std::string str);
				static void PrintWhenIsInfOrNan(std::string str);
				static void PrintWhenIsInffOrNanf(std::string str);
				static bool IsInfOrNan( std::string str);
        static bool IsInffOrNanf( std::string str);
				
} ScalarCoverter;

#endif