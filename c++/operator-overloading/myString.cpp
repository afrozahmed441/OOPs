#include <iostream>
#include <cstring>
#include <string>
#include "MyString.h"

MyString::MyString(): str(nullptr) {
    str = new char[1];
    *str = '\0';
}

MyString::MyString(const char *s): str(nullptr) {

    if(s == nullptr){
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[strlen(s)+1];
        strcpy(str, s);
    }
}

void MyString::displayString() const {
    std::cout << "String : " << str << std::endl;
}

int MyString::getLength() const {
    return strlen(str);
}

const char *MyString::getString() const {
    return str;
}

MyString::~MyString() {
    std::cout << "Clearing Memory Used " << std::endl;
    delete [] str;
}

/// operator overloading methods
/// copy assignment operator 
MyString &MyString::operator=(const MyString &rhs) {
    
    std::cout << "Operator= Method invoked" << std::endl;

    if(this == &rhs) return *this;
    
    delete [] str;
    str = new char[rhs.getLength()+1];
    strcpy(str, rhs.getString());
    
    return *this;
}

/// addition operator overloading 
MyString &MyString::operator+(const MyString &rhs) {

    std::cout << "Operator+ Method invoked " << std::endl;

    if(rhs.getString() == nullptr) return *this;

    size_t bufferSize = strlen(str) + rhs.getLength() + 1;
    char *buffer = new char[bufferSize];

    strcpy(buffer, str);
    strcat(buffer, rhs.getString());
    
    /// take care of memory leaking and dangling pointers 
    MyString *temp = new MyString(buffer);
    delete [] buffer;

    return *temp;
}