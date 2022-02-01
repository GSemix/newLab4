#include <iostream>
#include "astroida.h"

int main () {
    double input_r;
    double value;
    Astroida *object = new Astroida;
    
    std::cin >> input_r;
    object->set_r(input_r);
    std::cout << object->get_r() << std::endl << "###" << std::endl;
    
    std::cin >> value;
    std::cout << object->len_0_to_degrees(value) << std::endl << "###" << std::endl;
    
    std::cout << object->len() << std::endl << "###" << std::endl;
    
    std::cin >> value;
    std::cout << object->radius_of_curvature(value) << std::endl << "###" << std::endl;
    
    std::cout << object->square() << std::endl << "###" << std::endl;
    
    std::cin >> value;
    std::cout << "x: " << object->x(value) << std::endl;
    std::cout << "y: " << object->y(value) << std::endl << "###" << std::endl;
    
    std::cin >> value;
    std::cout << object->dependence_of_y_on_x(value) << std::endl << "###" << std::endl;

    delete object;
    return 0;
}
