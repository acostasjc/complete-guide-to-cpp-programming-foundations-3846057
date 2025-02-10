// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
//#include <string>


int main(){

    std::string myName;

    std::cout << "Type your first name: " << std::flush;
    std::cin >> myName;

    std::cout << "Welcome " << myName << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}