#include "B.h"


    bool B::isOld(){
        if(B::age > 75){
            return 1;
        }
        return 0;
    }

    std::string B::getFirstName(){
        return firstName;
    }

    std::string B::getLastName(){
        return lastName;
    }   
    
    int B::getAge(){
        return age;
    }
