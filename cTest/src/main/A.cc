#include "Person.h"
void isCarCool(Car);

int main(){
    Car car1(1971, "Chevrolet", "Camero");
    Person alpha("Alpha","Kilo",27);
    alpha.car = car1;
    std::cout << alpha.car.getMake() << ", " << alpha.car.getModel() << "\n";

    isCarCool(car1);
    return 0;
}

void isCarCool(Car c){
    if(c.isCool()){
        std::cout << "COOL CAR!\n";
    }
    else{
        std::cout << "NOT SO COOL CAR\n";
    }
}