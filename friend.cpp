#include <iostream>
#include "modul.cpp"
int main()
{
    Auto tesla("Tesla", 5000);
    drive(tesla);
    std::cout << tesla.getName() << " : " << tesla.getPrice() << std::endl;
    setPrice(tesla, 8000);
    std::cout << tesla.getName() << " : " << tesla.getPrice() << std::endl;

    return 0;
};
void drive(Auto& a)
{
    std::cout << a.name << " is driven" << std::endl;
}
void setPrice(Auto& a, int price)
{
    if (price > 0)
        a.price = price;
}