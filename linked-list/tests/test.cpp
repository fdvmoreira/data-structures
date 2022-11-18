#include "gtest/gtest.h"

TEST(LinkedListTest, InitialTest){
    ASSERT_TRUE(1==1) << "1 is equal to 1";
    ASSERT_EQ(3, 2+1) << "3 is equal to (2+1)";
}

TEST(DiffTest, Negative){
    ASSERT_NE(1,2);
    EXPECT_EQ(1,1);
}

TEST(GreaterTest, Negative){
    ASSERT_GT(4,2) << "Four is greater than 2";
}
