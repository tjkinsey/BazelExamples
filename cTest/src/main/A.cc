#include "B.h"
void isCarCool(C);


int main(){
    C c(1971, "Chevrolet", "Camero");
    isCarCool(c);
    return 0;
}

void isCarCool(C c){
    if(c.isCool()){
        std::cout << "COOL CAR!\n";
    }
    else{
        std::cout << "NOT SO COOL CAR\n";
    }
}