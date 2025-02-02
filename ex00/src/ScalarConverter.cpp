/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:44:01 by jenavarr          #+#    #+#             */
/*   Updated: 2025/02/02 16:59:35 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

void ScalarConverter::convert(std::string str)
{
		if (IsInfOrNan(str)){
				PrintWhenIsInfOrNan(str);
		} else if (IsInffOrNanf(str)){
				PrintWhenIsInffOrNanf(str);
		} else if (Is_Int(str)) {
				Convert_Int(str);
		} else if (Is_Char(str)) {
				Convert_Char(str);
		} else if (Is_Float(str)) {
				Convert_Float(str);
		} else if (Is_Double(str)) {
				Convert_Double(str);
		} else {
				std::cerr << "Invalid input: " << str << std::endl;
		}
}

bool ScalarConverter::IsInfOrNan( std::string value )
{
		return (value == "nan" || value == "inf" || value == "+inf" || value == "-inf");
}

bool ScalarConverter::IsInffOrNanf( std::string value )
{
		return (value == "nanf" || value == "inff" || value == "+inff" || value == "-inff");
}

void ScalarConverter::PrintWhenIsInfOrNan(std::string str)
{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
}

void ScalarConverter::PrintWhenIsInffOrNanf(std::string str)
{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.erase(str.size() - 1) << std::endl;
}

bool ScalarConverter::Is_Char(std::string str)
{
	return (str.size() == 3 && str[0] == '\'' && str[2] == '\'');
}

bool ScalarConverter::Is_Int(std::string str)
{
	if (str.empty())
		return (false);
	//Si str contiene letras o signos como ., no es un int
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			return (false);
	}
	int i = atoi(str.c_str());
	if (i == 0)
	{
		if (str[0] != '0')
			return (false);
	}
	return (true);
}

bool ScalarConverter::Is_Float(std::string str)
{
	//Si el último caracter no es f, no es un float
	if (str.empty() || str[str.size() - 1] != 'f')
	{
		return (false);
	}
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '+' && str[i] != '.' && str[i] != 'f')
			return (false);
	}
	float f = atof(str.c_str());
	if (f == 0)
	{
		if (str != "0.0f")
			return (false);
	}
	return (true);
}

bool ScalarConverter::Is_Double(std::string str)
{
	//Si str contiene letras o signos como ., no es un double
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '+' && str[i] != '.')
			return (false);
	}
	double d = atof(str.c_str());

	if (d == 0)
	{
		if (str != "0.0")
			return (false);
	}
	return (true);
}

void ScalarConverter::Convert_Char(std::string str)
{
	try
	{
		char c = static_cast<char>(str[1]);
		int i = static_cast<int>(c);
		float f = static_cast<float>(c);
		double d = static_cast<double>(c);

		if (str != "-1" && str != "-1f" && str != "-1.0" && str != "-1.0f" && ( i == -1 || c == -1 || f == -1 || d == -1))
		{
			std::cerr << "Overflow or underflow in int conversion" << '\n';
			return;
		}
		if (c < 32)
		{
			std::cout << "char: Non displayable" << std::endl;
		} else {
			std::cout << "char: " << '\'' << c << '\'' << std::endl;
		}
		std::cout << "int: " << i << std::endl;

		std::cout << "float: " << f << ".0f" << std::endl;

		std::cout << "double: " << d << ".0" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Overflow or underflow in char conversion" << '\n';
	}

}

void ScalarConverter::Convert_Int(std::string str)
{
		int i = atoi(str.c_str());
		char c = static_cast<char>(i);
		float f = static_cast<float>(i);
		double d = static_cast<double>(i);

		if (str != "-1" && str != "-1f" && str != "-1.0" && str != "-1.0f" && ( i == -1 || c == -1 || f == -1 || d == -1))
		{
			std::cerr << "Overflow or underflow in int conversion" << '\n';
			return;
		}

		if (c < 32)
		{
			std::cout << "char: Non displayable" << std::endl;
		} else {
			std::cout << "char: " << '\'' << c << '\'' << std::endl;
		}
		std::cout << "int: " << i << std::endl;

		std::cout << "float: " << f << ".0f" << std::endl;

		std::cout << "double: " << d << ".0" << std::endl;
}

void ScalarConverter::Convert_Float(std::string str)
{
	try
	{
		float f = atof(str.c_str());
		char c = static_cast<char>(f);
		int i = static_cast<int>(f);
		double d = static_cast<double>(f);

		if (str != "-1" && str != "-1f" && str != "-1.0" && str != "-1.0f" && ( i == -1 || c == -1 || f == -1 || d == -1))
		{
			std::cerr << "Overflow or underflow in int conversion" << '\n';
			return;
		}
		if (c < 32)
		{
			std::cout << "char: Non displayable" << std::endl;
		} else {
			std::cout << "char: " << '\'' << c << '\'' << std::endl;
		}
		std::cout << "int: " << i << std::endl;

		std::cout << "float: " << f << "f" << std::endl;

		std::cout << "double: " << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Overflow or underflow in float conversion" << '\n';
	}
}

void ScalarConverter::Convert_Double(std::string str)
{
	try
	{
		double d = atof(str.c_str());
		char c = static_cast<char>(d);
		int i = static_cast<int>(d);
		float f = static_cast<float>(d);

		if (str != "-1" && str != "-1f" && str != "-1.0" && str != "-1.0f" && ( i == -1 || c == -1 || f == -1 || d == -1))
		{
			std::cerr << "Overflow or underflow in int conversion" << '\n';
			return;
		}		
		if (c < 32)
		{
			std::cout << "char: Non displayable" << std::endl;
		} else {
			std::cout << "char: " << '\'' << c << '\'' << std::endl;
		}
		std::cout << "int: " << i << std::endl;

		std::cout << "float: " << f << "f" << std::endl;

		std::cout << "double: " << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Overflow or underflow in double conversion" << '\n';
	}
}