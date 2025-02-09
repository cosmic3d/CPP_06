/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenavarr <jenavarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:13:20 by jenavarr          #+#    #+#             */
/*   Updated: 2025/02/02 17:18:26 by jenavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"
// Test program
int main() {
    // Create a Data object
    Data data = {42, 3.14, "Test"};

		//Print original data
    std::cout << "Original data values: " << data.value1 << ", " << data.value2 << ", " << data.name << std::endl;


    // Print the original address of the Data object
    std::cout << "Original address: " << &data << std::endl;

    // Serialize the address of the Data object
    uintptr_t serialized = Serializer::serialize(&data);
    std::cout << "Serialized value: " << serialized << std::endl;

    // Deserialize the serialized value back to a Data pointer
    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Deserialized address: " << deserialized << std::endl;

    // Compare the original pointer with the deserialized pointer
    if (deserialized == &data) {
        std::cout << "Success: The deserialized pointer matches the original pointer!" << std::endl;
    } else {
        std::cout << "Error: The deserialized pointer does not match the original pointer!" << std::endl;
    }

    // Access the data members to verify the data is intact
    std::cout << "Converted data values: " << deserialized->value1 << ", " << deserialized->value2 << ", " << deserialized->name << std::endl;

    return 0;
}