//Q. 2 : Program to create voting eligibility system
#include <iostream>

int main() {
    int age = 0;
    char citizen = 'N';
    char registered = 'N';

    std::cout << "    VOTING ELIGIBILITY SYSTEM    \n";
    //Check Age
    std::cout << "Please enter your age: ";
    std::cin >> age;

    if (age < 18) {
        std::cout << "Status: INELIGIBLE\n";
        std::cout << "Reason: You must be at least 18 years old to vote.\n";
        return 0; // Terminate early since age is a hard requirement
    }

    //Check Citizenship
    std::cout << "Are you a citizen of this country? (Y/N): ";
    std::cin >> citizen;

    if (citizen != 'Y' && citizen != 'y') {
        std::cout << "Status: INELIGIBLE\n";
        std::cout << "Reason: Only valid citizens are allowed to vote.\n";
        return 0; // Terminate early
    }

    //Check Voter Registration
    std::cout << "Are you registered to vote? (Y/N): ";
    std::cin >> registered;

    if (registered != 'Y' && registered != 'y') {
        std::cout << "Status: CONDITIONALLY INELIGIBLE\n";
        std::cout << "Reason: You meet the criteria, but you must register before you can vote.\n";
    } else {
        std::cout << "Status: FULLY ELIGIBLE!\n";
        std::cout << "Action: You are ready to cast your ballot at the next election.\n";
    }

    return 0;
}
