// From Uppercase to Lowercase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main(){
    std::string str;

    str = "WELCOME";

    std::cout << str << std::endl;

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = str[i] + 32;
    }

    std::cout << str << std::endl;

    return 0;
}


