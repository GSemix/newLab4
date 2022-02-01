#include <iostream>
#include <cmath>
#include "nefroida.h"

#define PI 3.14159265
#define eq "(x^2 + y^2 - ) =  * y^2"

double Nefroida::get_r () {
    return r;
}
    
void Nefroida::set_r (double input_r) {
    r = input_r;
}

double Nefroida::curve_length () {
    return 24 * r;
}

double Nefroida::radius_of_curvature (double t) {
//    double t;
    
//    do {
//        std::cout << "t |=> ";
//    } while ((!getNum(t)) || (t < 0));
    
    return abs(3 * r * sin(t));
}

double Nefroida::curved_area () {
    return 12 * PI * pow(r, 2);
}

double Nefroida::x_depending_on_t (double t) {
    return 6 * r * cos(t) - 4 * r * cos(3 * t);
}

double Nefroida::y_depending_on_t (double t) {
    return 4 * r * pow(sin(t), 3);
}

char * Nefroida::nefroid () {    
    int count = -1;
    int countMain = -1;
    char * equation = new char[100]();
    
    for (int i = 0; i < 14; i++) equation[count++] = eq[countMain++];
    
    char a [20];
    sprintf(a, "%f", 4 * pow(r, 2));
    
    for (int i = 0; i < strlen(a); i++) equation[count++] = a[i];
    for (int i = 0; i < 4; i++) equation[count++] = eq[countMain++];
    
    char b [20];
    sprintf(b, "%f", 108 * pow(r, 4));
    
    for (int i = 0; i < strlen(b); i++) equation[count++] = b[i];
    for (int i = 0; i < 6; i++) equation[count++] = eq[countMain++];
    
    return equation;
}
