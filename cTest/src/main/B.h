#ifndef B_H
#define B_H

#include <iostream>
#include <string>

class B{
    public:
        std::string firstName;
        std::string lastName;
        int age;

        B(std::string firstName1, std::string lastName1, int age1){
            firstName = firstName1;
            lastName = lastName1;
            age = age1;
        }

        bool isOld();
        std::string getFirstName();
        std::string getLastName();
        int getAge();
};

class C{
    public:
        int year;
        std::string make;
        std::string model;

        C(int year1, std::string make1, std::string model1){
            year = year1;
            make = make1;
            model = model1;
        }
        
        int getYear();
        std::string getMake();
        std::string getModel();
        bool isCool();
};

#endif