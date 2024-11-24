/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:44:01 by jenavarr          #+#    #+#             */
/*   Updated: 2024/11/24 15:59:53 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

void ScalarConverter::convert(std::string str)
{
	if (Is_Int(str)) {
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
	try
	{
		int i = std::stoi(str);
		return (true);
	}
	catch(const std::exception& e)
	{
		return (false);
	}
	return (false);
}

bool ScalarConverter::Is_Float(std::string str)
{
	//Si el último caracter es un f, es un float
	if (str.empty() || str[str.size() - 1] != 'f')
	{
		return (false);
	}
	//Si str contiene letras o signos como ., no es un float
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '+' && str[i] != '.' && str[i] != 'f')
			return (false);
	}
	try
	{
		float f = std::stof(str);
		return (true);
	}
	catch(const std::exception& e)
	{
		return (false);
	}
	return (false);
}

bool ScalarConverter::Is_Double(std::string str)
{
	//Si str contiene letras o signos como ., no es un double
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '+' && str[i] != '.')
			return (false);
	}
	try
	{
		double d = std::stod(str);
		return (true);
	}
	catch(const std::exception& e)
	{
		return (false);
	}
	return (false);
}