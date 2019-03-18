#include "Person.h"

    bool Person::isOld(){
        if(Person::age > 75){
            return 1;
        }
        return 0;
    }

    std::string Person::getFirstName(){
        return firstName;
    }

    std::string Person::getLastName(){
        return lastName;
    }   
    
    int Person::getAge(){
        return age;
    }
