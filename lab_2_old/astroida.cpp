#include <iostream>
#include <cmath>
#include "astroida.h"

#define PI 3.14159265

double Astroida::get_r () {
    return r;
}
    
void Astroida::set_r (double input_r) {
    r = input_r;
}

double Astroida::len_0_to_degrees (double degrees) {
    return 6 * r * pow(sin(degrees * PI / 180), 2);
}

double Astroida::len () {
    return 24 * r;
}

double Astroida::radius_of_curvature (double degrees) {
    return 6 * r * sin(2 * (degrees * PI / 180));
}

double Astroida::square () {
    return 6 * PI * pow(r, 2);
}

double Astroida::x (double degrees) {
    return 4 * r * pow(cos(degrees * PI / 180), 3);
}

double Astroida::y (double degrees) {
    return 4 * r * pow(sin(degrees * PI / 180), 3);
}

double Astroida::dependence_of_y_on_x (double val_x) {
//    return pow(pow(4 * r, 2 / 3) - pow(val_x, 2 / 3), 3 / 2);
    std::cout << val_x;
    double step = 2/3;
    std::cout << "\n" << pow(0, 2/3) << "\n";
    return pow(val_x, step);
}
