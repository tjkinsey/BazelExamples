package main.java.com.files;

public class B{

    String firstName;
    String lastName;
    int age;

    public B(String firstName, String lastName, int age){
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }

    public boolean isOld(){
        if(this.age > 75){
            return true;
        }
        return false;
    }

    public String getFirstName(){
        return this.firstName;
    }

    public String getLastName(){
        return this.lastName;
    }

    public int getAge(){
        return this.age;
    }

}