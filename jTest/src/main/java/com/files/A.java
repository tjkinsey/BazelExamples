package main.java.com.files;

public class A{
    public static void main(String args[]){
        System.out.println("TEST");
        C c = new C(1971, "Chevrolet", "Camero");
        isCoolCar(c);
        B b = new B("Alpha", "Kilo", 27);
        System.out.println(b.getFirstName() + " " + b.getLastName() + " is " + b.getAge() + " years old.");
    }

    public static void isCoolCar(C car){
        if(car.isCool()){
            System.out.println("COOL CAR!");
        }
        else{
            System.out.println("not so cool...");
        }
    }
}