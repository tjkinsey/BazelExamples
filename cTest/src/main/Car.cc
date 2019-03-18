#include "Person.h"
#include <array>

int Car::getYear(){
    return year;
}

std::string Car::getMake(){
    return make;
}

std::string Car::getModel(){
    return model;
}

bool Car::isCool(){
    
    std::string coolCars [4] = {"camero","mustang","charger","gto"};
    std::string lowerCase;
    for(char c : Car::model){
        lowerCase+=tolower(c);
    }

    for(int i = 0; i < 4; i++){
        if(coolCars[i] == lowerCase){
            
            return true;
        }
    }
    return false;
}
