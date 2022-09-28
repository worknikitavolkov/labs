#include <iostream>
#include <string>

std::string get_months(uint16_t);

int main()
{
    uint16_t days;

    std::cout << "Enter the last day of month: ";
    std::cin >> days;

    std::cout << get_months(days) << std::endl;

    return 0;
}

std::string get_months(uint16_t days)
{
    std::string months;

    switch (days)
    {
    case 28:
    case 29:
        months = "February";
        break;
    case 30:
        months = "April, June, September, November";
        break;
    case 31:
        months = "January, March, May, July, August, October, December";
        break;
    default:
        months = "No months! Enter the correct number!";
        break;
    }

    return months;
}