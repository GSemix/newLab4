#pragma once /* Защита от двойного подключения заголовочного файла */

template <class T>
inline bool getNum (T &num) {
    if (!(std::cin >> num)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        return false;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return true;
}

class Nefroida {

    public:
    double get_r ();
    void set_r (double input_r);
    double curve_length ();
    double radius_of_curvature (double t);
    double curved_area ();
    double x_depending_on_t (double t);
    double y_depending_on_t (double t);
    char * nefroid();

    private:
    double r;
};
