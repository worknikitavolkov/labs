#include <iostream>
#include <cmath>

double compute(double, double, double);

int main()
{
    double x, y, z;
    std::cout << "Enter x, y, z separated by space: ";
    std::cin >> x >> y >> z;
    std::cout << "Result: " << compute(x, y, z) << std::endl;
    return 0;
}

double compute(double x, double y, double z)
{
    double radicand = pow(x-y, 2) + 4 * pow(z, 2);
    double numerator = x + y + sqrt(radicand);
    return numerator / 2;
}
