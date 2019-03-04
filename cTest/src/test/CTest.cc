#include "gtest/gtest.h"
#include "../main/B.h"

TEST(CTest, isCool){
    C c(1971, "Chevrolet" , "Camero");
    EXPECT_TRUE(c.isCool());
}