#include <iostream>
#include <string>

/// Animal Class 
/// It is always a good way to define the class in .h file 
/// In this example for the simplicity purpose i am declaring the class in the main

/// method overriding 
/// overriding is a feature provided by OOP that allow a sub class or child class 
/// to define a specific implemention of a method that is already present in the super class 
/// or parent class 
/// method overriding allows programmers to achieve run time polymorphism

/// method overriding can be achieved using 
/// 1. inheritance 
/// 2. virtual function 

/// rules for method overriding 
/// 1. overriding method should be declared as a virtual method in base class
/// 2. The signature of the method that is overriding the base class method must 
///    be same as the base class method signature and return type.

/// NOTE : when using virtual methods in the class, it is good to have virtual 
/// destructor also.

class Animal {

public:

    Animal() { std::cout << "Animal Object is created. " << std::endl; }
    virtual void eat() { std::cout << "[ Animal ] : Eating... " << std::endl; }
    virtual void sleep() { std::cout << "[ Animal ] : Sleeping.. " << std::endl; }
    virtual ~Animal() { std::cout << "Animal Object deleted. " << std::endl; }

};



class Cat: public Animal {
    std::string name;
public:
    
    Cat(std::string name): name(name) { 
        std::cout << "Cat Object Created. " << std::endl; 
    }

    /// It is not mandatory to declare the derived overriding method to be 
    /// virtual methods
    /// override keyword is also not mandatory 
    /// It just takes care that the method is overridden else throws compile time errors

    virtual void eat() override { 
        std::cout << "[ " << this->name << "  Cat ] : Eating... " << std::endl;
    }

    virtual void sleep() override {
            std::cout << "[ " << this->name << "  Cat ] : Sleeping... " << std::endl;
    }

    ~Cat() { std::cout << "Cat Object deleted. " << std::endl; }
    

};

int main() {

    Animal animal;
    animal.eat();
    animal.sleep();

    Cat simin{"Simin"};
    simin.eat();
    simin.sleep();

    /// run time polymorphism 
    Animal *samba = new Cat("Samba");
    samba->eat();
    samba->sleep();


 return 0;
}