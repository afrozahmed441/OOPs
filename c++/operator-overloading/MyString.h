#ifndef _MY_STRING_
#define _MY_STRING_

/// Operator Overloading 
/// operator overloading helps us to use the operators for the user defined data types
/// Syntax : returnType operatorKeyword operator(parameters) 

class MyString {

    char *str;

public:
    MyString();
    MyString(const char *);
    ~MyString();
    /// overloading assignment copy operator 
    /// assignment copy operator is used to assign one object to another 
    /// by default c++ provides the shallow copy assignment operator
    /// if we are using the raw pointers as class data members we must use 
    /// assignment copy operator with deep copy 
    MyString &operator=(const MyString &);
    MyString &operator+(const MyString &);
    void displayString() const;
    int getLength() const;
    const char *getString() const;
};

#endif