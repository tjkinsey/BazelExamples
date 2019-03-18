#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Car
{
    public:
        int year;
        std::string make;
        std::string model;

        Car(){}

        Car(int year1, std::string make1, std::string model1){
            year = year1;
            make = make1;
            model = model1;
        }
        
        int getYear();
        std::string getMake();
        std::string getModel();
        bool isCool();
};

class Person : public Car
{
    public:
        std::string firstName;
        std::string lastName;
        int age;
        Car car;

        Person(std::string firstName1, std::string lastName1, int age1){
            firstName = firstName1;
            lastName = lastName1;
            age = age1;
        }

        bool isOld();
        std::string getFirstName();
        std::string getLastName();
        int getAge();
};
#endif