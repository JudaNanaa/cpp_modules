/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:17:58 by madamou           #+#    #+#             */
/*   Updated: 2024/10/28 19:31:56 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main() {
    Data data(42, "Example", 3.14f);
    std::cout << "Original Data object:" << std::endl;
    std::cout << "ID: " << data.id << ", Name: " << data.name << ", Value: " << data.value << std::endl;

    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "\nSerialized data pointer: " << raw << std::endl;

    Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "\nDeserialized Data object:" << std::endl;
    std::cout << "ID: " << deserializedData->id << ", Name: " << deserializedData->name << ", Value: " << deserializedData->value << std::endl;

    if (deserializedData == &data) {
        std::cout << "\nTest passed: deserialized pointer matches the original pointer." << std::endl;
    } else {
        std::cout << "\nTest failed: deserialized pointer does not match the original pointer." << std::endl;
    }

    return 0;
}
