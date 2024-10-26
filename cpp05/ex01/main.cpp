/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:56:50 by madamou           #+#    #+#             */
/*   Updated: 2024/10/26 18:33:13 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat alice("Alice", 50);
        Form taxForm("TaxForm", 45, 30);
        
        std::cout << taxForm << std::endl;

        // Attempt to sign the form with insufficient grade
        alice.signForm(taxForm);
        std::cout << taxForm << std::endl;

        // Promote Alice to the required grade
        alice.incrementGrade();
        alice.incrementGrade();
        alice.incrementGrade();
        alice.incrementGrade();
        alice.incrementGrade();

        // Now Alice should be able to sign the form
        alice.signForm(taxForm);
        std::cout << taxForm << std::endl;
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        // Form with invalid signing grade
        Form invalidForm("InvalidForm", 0, 150);
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        // Form with invalid execution grade
        Form anotherInvalidForm("AnotherInvalidForm", 50, 151);
    }
    catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
