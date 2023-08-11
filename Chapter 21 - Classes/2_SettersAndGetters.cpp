#include <iostream>

class Cylinder {
    public:
        // Constctors
        Cylinder() = default; 

        //* getter methods
        double get_base_radius() { return base_radius; }
        double get_height() { return height; }

        //* setter methods
        void set_base_radius(double rad_param) { base_radius = rad_param; }
        void set_height(double height_param) { height = height_param; }
    private:
        double base_radius{1};
        double height{1};
};

int main() {
    Cylinder cylinder;

    //* Modify our object
    cylinder.set_base_radius(100);
    cylinder.set_height(10);

    //* getting our object
    std::cout << "base_radius : " << cylinder.get_base_radius() << std::endl;
    std::cout << "height : " << cylinder.get_height() << std::endl;
    return 0;
}