#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    // Create an Intern instance
    Intern someRandomIntern;

    // Create a Bureaucrat with sufficient grade for form testing
    Bureaucrat boss("The Boss", 1);

    // Pointers to store created forms
    AForm* form1;
    AForm* form2;
    AForm* form3;
    AForm* unknownForm;

    std::cout << "\n--- Testing Intern's makeForm() method ---\n" << std::endl;

    try {
        // Test creating a ShrubberyCreationForm
        form1 = someRandomIntern.makeForm("shrubbery creation", "Backyard");
        std::cout << "\nForm created: " << form1->getName() << std::endl;
        boss.signForm(*form1);
        boss.executeForm(*form1);
        delete form1;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        // Test creating a RobotomyRequestForm
        form2 = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << "\nForm created: " << form2->getName() << std::endl;
        boss.signForm(*form2);
        boss.executeForm(*form2);
        delete form2;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        // Test creating a PresidentialPardonForm
        form3 = someRandomIntern.makeForm("presidential pardon", "Zaphod Beeblebrox");
        std::cout << "\nForm created: " << form3->getName() << std::endl;
        boss.signForm(*form3);
        boss.executeForm(*form3);
        delete form3;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        // Attempt to create an unknown form
        unknownForm = someRandomIntern.makeForm("unknown form", "Unknown");
        if (unknownForm)
            delete unknownForm;
    } catch (std::exception &e) {
        std::cerr << "\nError: " << e.what() << std::endl;
    }

    std::cout << "\n--- End of tests ---" << std::endl;

    return 0;
}
