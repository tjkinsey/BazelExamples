package main.java.com.files;

public class C{
    int year;
    String make;
    String model;

    public C(int year, String make, String model){
        this.year = year;
        this.make = make;
        this.model = model;
    }

    public int getYear(){
        return this.year;
    }

    public String getMake(){
        return this.make;
    }

    public String getModel(){
        return this.model;
    }

    public boolean isCool(){
        String coolCars [] = {"camero","mustang","charger","gto"};
        for(int i = 0; i < coolCars.length; i++){
            if(coolCars[i].equals(this.model.toLowerCase())){
                return true;
            }
        }
        return false;
    }
}