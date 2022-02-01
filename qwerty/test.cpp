// lab_2 % g++ test.cpp nefroida.cpp -lgtest -lgtest_main -pthread -o test.out -std=c++11

#include "gtest/gtest.h"
#include <iostream>
#include "nefroida.h"
#include <cmath>

#define PI 3.14159265
#define eq "(x^2 + y^2 - ) =  * y^2"

TEST(Nefroida, sample_test)
{
    Nefroida *object = new Nefroida;
    object->set_r(5.0);
    EXPECT_EQ(object->get_r(), 5.0);
}

TEST(Nefroida, sample_test_1)
{
    Nefroida *object = new Nefroida;
    object->set_r(5.0);
    EXPECT_EQ(object->curve_length(), 24 * 5.0);
    delete object;
}

TEST(Nefroida, sample_test_2)
{
    Nefroida *object = new Nefroida;
    object->set_r(5.0);
    
    double t;
    
    do {
        std::cout << "t |=> ";
    } while ((!getNum(t)) || (t < 0));
    
    EXPECT_EQ(object->radius_of_curvature(t), abs(3 * 5.0 * sin(t)));
    delete object;
}

TEST(Nefroida, sample_test_3)
{
    Nefroida *object = new Nefroida;
    object->set_r(5.0);
    EXPECT_EQ(object->curved_area(), 12 * PI * pow(5.0, 2));
    delete object;
}

TEST(Nefroida, sample_test_4)
{
    Nefroida *object = new Nefroida;
    object->set_r(5.0);
    
    double t;
    
    do {
        std::cout << "t |=> ";
    } while ((!getNum(t)) || (t < 0));
    
    EXPECT_EQ(object->x_depending_on_t(t), 6 * 5.0 * cos(t) - 4 * 5.0 * cos(3 * t));
    delete object;
}

TEST(Nefroida, sample_test_5)
{
    Nefroida *object = new Nefroida;
    object->set_r(5.0);
    
    double t;
    
    do {
        std::cout << "t |=> ";
    } while ((!getNum(t)) || (t < 0));
    
    EXPECT_EQ(object->y_depending_on_t(t), 4 * 5.0 * pow(sin(t), 3));
    delete object;
}

TEST(Nefroida, sample_test_6)
{
    Nefroida *object = new Nefroida;
    object->set_r(5.0);
    char * q = object->nefroid();
    EXPECT_EQ(std::string(q), "(x^2 + y^2 - 100.000000) = 67500.000000 * y^2");
    delete[] q;
    delete object;
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
