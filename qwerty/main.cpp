#include <iostream>
#include "nefroida.h"

#define PI 3.14159265

int main () {
    double input_r;
    double t;
    int sc = 0;
    Nefroida *object = new Nefroida;
    
    while (sc != 9) {
        
        do {
            std::cout << "\n{1} -> Set r\t\t{4} -> Radius of curvature (t)\t{7} -> Y depending on T\n{2} -> Get r\t\t{5} -> Curved area\t\t{8} -> Nefroida\n{3} -> Curve length\t{6} -> X depending on T\t\t{9} -> Exit\n\n|=> ";
        } while (!getNum(sc));
        
        switch (sc) {
            case 1:
                do {
                    std::cout << "r => ";
                } while ((!getNum(input_r)) || (sc < 0));
                
                object->set_r(input_r);
                std::cout << object->get_r() << std::endl;
                break;
                
            case 2:
                std::cout << object->get_r() << std::endl;
                break;
                
            case 3:
                std::cout << object->curve_length() << std::endl;
                break;
                
            case 4:
                do {
                    std::cout << "t |=> ";
                } while ((!getNum(t)) || (t < 0));
                
                std::cout << object->radius_of_curvature() << std::endl;
                t = 0
                break;
                
            case 5:
                std::cout << object->curved_area() << std::endl;
                break;
                
            case 6:
                do {
                    std::cout << "[t] => ";
                } while ((!getNum(t)) || (t < 0 || t >= PI * 2));
                
                std::cout << object->x_depending_on_t(t) << std::endl;
                t = 0;
                break;
                
            case 7:
                do {
                    std::cout << "[t] => ";
                } while ((!getNum(t)) || (t < 0 || t >= PI * 2));
                
                std::cout << object->y_depending_on_t(t) << std::endl;
                t = 0;
                break;
                
            case 8:
                char * equation;
                equation = object->nefroid();
                std::cout << equation << std::endl;
                
                delete[] equation;
                break;
                
            case 9:
                break;
                
            default:
                std::cout << "Error!" << std::endl;
                break;
        }
    }
    
    delete object;
    return 0;
}

