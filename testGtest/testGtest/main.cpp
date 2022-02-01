//
//  main.cpp
//  testGtest
//
//  Created by Семен Безгин on 15.10.2021.
//

#include <iostream>
#include "gtest/gtest.h"

TEST(sample_test_case, sample_test)
{
    EXPECT_EQ(1, 1);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    
    return RUN_ALL_TESTS();
}
