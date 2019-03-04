#include "B.h"
#include <array>

int C::getYear(){
    return year;
}

std::string C::getMake(){
    return make;
}

std::string C::getModel(){
    return model;
}

bool C::isCool(){
    
    std::string coolCars [4] = {"camero","mustang","charger","gto"};
    std::string lowerCase;
    for(char c : C::model){
        lowerCase+=tolower(c);
    }

    for(int i = 0; i < 4; i++){
        if(coolCars[i] == lowerCase){
            
            return true;
        }
    }
    return false;
}
