#include <iostream>

int main()
{
    uint64_t n;
    double a1, d;
    double an, sum;

    std::cout << "a1 - the first term of the progression\n";
    std::cout << "d - progression difference\n";
    std::cout << "n - the n term in the sequence\n";
    std::cout << "Enter a1, d, n separated by space: ";
    std::cin >> a1 >> d >> n;
    
    an = a1 + d * (n - 1);
    sum = (2 * a1 + d * (n - 1)) / 2 * n;

    std::cout << "###### The Result ######\n";
    std::cout << "an: " << an << std::endl;
    std::cout << "sum: " << sum << std::endl;

    return 0;
}