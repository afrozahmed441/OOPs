#include <iostream>
#include <string>

/// abstract class
/// an abstract class is a class that can not have objects means it is not a 
/// concrete class
/// abstract classes are useful to declare a abstract level class
/// where object can not be instantiate from the class
/// abstaract class forces to implement the abstract method in the abstract class 
/// if the class that inherites the abstract class does not provide implementation 
/// of all the abstract method(pure virtual) then the derived class is also 
/// an abstract class
class Person {
    std::string name;

public:
    Person(std::string name): name(name) { }
    
    /// a class to be an abstract class we make use of
    /// pure virtual methods
    virtual void work() = 0;

    std::string getName() {
        return this->name;
    }

    virtual ~Person() { }
};

class Student: public Person {

public:
    Student(std::string name): Person(name) { }

    /// overriding the pure virtual method in the base class 
    /// in order to make Student a concrete class ( can have objects )
    virtual void work() {
        std::cout << " Student work : " << "Read, Write, Eat, Sleep" << std::endl;
    }

    std::string getName() {
        return Person::getName();
    }

    virtual ~Student() { }

};

int main() {

    /// this is not possible, because Person is an abstract class
    // Person p;

    Student s1 {"S1"};
    s1.work();

    /// but we can point the Person class pointer type to concrete class 
    Person *s2 = new Student("S2");
    s2->work();
    
    std::cout << " Student name : " << s2->getName() << std::endl;

 return 0;
}