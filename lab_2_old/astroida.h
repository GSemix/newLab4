#pragma once /* Защита от двойного подключения заголовочного файла */

class Astroida {

    public:
    double get_r ();
    void set_r (double input_r);
    double len_0_to_degrees (double degrees);
    double len ();
    double radius_of_curvature (double degrees);
    double square ();
    double x (double degrees);
    double y (double degrees);
    double dependence_of_y_on_x (double val_x);

    private:
    double r;
};
