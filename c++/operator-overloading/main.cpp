#include <iostream>
#include <string>
#include "MyString.h"

int main() {

    char s[] = "Afroz Ahmed";
    MyString str{s};

    MyString str2;
    str2 = str;

    str.displayString();
    str2.displayString();

    std::cout << "String str : " << str.getString() << std::endl;
    std::cout << "String str2 : " << str.getString() << std::endl;

    std::cout << "String str length : " << str.getLength() << std::endl;
    std::cout << "String str2 length : " << str2.getLength() << std::endl;

    MyString str3 = str + str2;

    std::cout << "String str3 : " << str3.getString() << std::endl;
    std::cout << "String str3 length : " << str3.getLength() << std::endl;

    char s1[] = "Afroz Ahmed";
    char s2[] = " Shaik";

    MyString firstName{s1};
    MyString lastName{s2};

    MyString fullName = firstName + lastName;

    std::cout << "Full Name : " << fullName.getString() << std::endl;
    std::cout << "Full Name string length : " << fullName.getLength() << std::endl;

    /// invoking overloading stream insertion operator method
    std::cout << fullName;

    MyString inStr;
    std::cout << "Enter your name : ";
    std::cin >> inStr;
    std::cout << "Your name : ";
    std::cout << inStr << std::endl;

 return 0;
}