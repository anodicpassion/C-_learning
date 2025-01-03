#include <iostream>

int main() {
    
    // defining the pi 
    double pi = 3.14159;
    
    // defining the radius of the circle
    double radius = 10;

    // getting into formula
    double circumference = 2 * pi * radius;

    std::cout << "Circumference of the circle with radius (" << radius << ") is: " << circumference << std::endl;
    return 0;
}