#include <iostream>
#include <string>
/* #include <math.h> */

const double pi {3.14159};

double area_circle(double radio){
    return pi * (radio * radio);
}

void show_circle_area(){
    double value{};
    std::cout << "Please type a the radius of the circle\n";
    std::cin >> value;
    std:: cout << "The Area of the circle is\n" << area_circle(value) << "\n";
}

int cylinder_volume(double radio, double height){
    return pi * (radio * radio) * height;
}

void show_volume_cylinder(){
    double radio{};
    double height{};
    std::cout << "Please type the radius and height of the cylinder\n";
    std::cin >> radio >> height;
    std:: cout << "The volume of the cylinder is\n" << cylinder_volume(radio,height) << "\n";
}

int main(){
    show_volume_cylinder();
    show_circle_area();
    return 0;
}
