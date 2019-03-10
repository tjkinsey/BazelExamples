#include "gtest/gtest.h"
#include "../main/B.h"

//create B objects to test
B b("Alpha","Kilo",27);
B b1("Beta", "Gamma", 1000);

TEST(BTest, getFirstName){
    EXPECT_EQ("Alpha", b.getFirstName());
}

TEST(BTest, getLastNAme){
    EXPECT_EQ("Gamma", b1.getLastName());
}

TEST(BTest, getAge){
    EXPECT_EQ(1000, b1.getAge());
}

TEST(BTest, isOldTRUE){
    EXPECT_TRUE(b1.isOld());
}

TEST(BTest, isOldFalse){
    EXPECT_FALSE(b.isOld());
}