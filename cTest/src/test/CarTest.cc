#include "gtest/gtest.h"
#include "../main/Person.h"

//branch testing on the C::isCool()
TEST(CTest, isCoolTrue){
    Car c(1971, "Chevrolet" , "Camero");
    EXPECT_TRUE(c.isCool());
}

TEST(CTest, isCoolFalse){
    Car c1(1999, "VW", "Bug");
    EXPECT_FALSE(c1.isCool());
}


//create a C object that will be used by the following Test functions
//best practices are to have one test per TEST function
Car c2(1967, "Ford", "Mustang");

TEST(CTest, getYear){
    EXPECT_EQ(1967, c2.getYear());
}

TEST(CTest, getMake){
    EXPECT_EQ("Ford", c2.getMake());
}

TEST(CTest, getModel){
    EXPECT_EQ("Mustang", c2.getModel());
}