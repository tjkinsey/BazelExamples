#include "gtest/gtest.h"
#include "../main/B.h"

TEST(BTest, getName){
    B b("Alpha","Kilo",27);
    EXPECT_EQ("Alpha", b.getFirstName());
}