#include <iostream>
#include <cmath>

int main() {
    double x = 3;
    double y = 4;
    double z = std::sqrt(x*x + y*y);
    std::cout << "The distance between (" << x << ", " << y << ") is: " << z << std::endl;
    return 0;
}
