#include <iostream>
#include <cmath>

double compute(double, double);

int main()
{
    double a, b;

    std::cout << "Enter a, b separated by space: ";
    std::cin >> a >> b;
    if (1 <= abs(a) && abs(a) <= 4)
    {
        std::cout << "Result: " << compute(a, b) << std::endl;
    }
    else
    {
        std::cout << "Value of a does not belong to the interval!\n";
    }

    return 0;
}

double compute(double a, double b)
{
    if (a > b)
        return (a + 2) / (b + 4);
    else
        return a + b;
}
