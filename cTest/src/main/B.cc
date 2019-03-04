#include "B.h"


    bool B::isOld(){
        if(B::age > 25){
            return 1;
        }
        return 0;
    }

    std::string B::getFirstName(){
        return B::firstName;
    }

    std::string B::getLastName(){
        return B::lastName;
    }   
    
    int B::getAge(){
        return B::age;
    }