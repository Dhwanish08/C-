#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;

    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << "Enter the value of b: ";
    std::cin >> b;

    double c = sqrt(pow(a,2) + pow(b,2));

    /*a = pow(a,2); same for b and c = sqrt(a+b); this is the other way */

    std::cout << "The value of c is " << c << std::endl;

    return 0;
}