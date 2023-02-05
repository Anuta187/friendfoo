#include <iostream>
#include <string>  
 

class Auto
{
    friend void drive(Auto &);
    friend void setPrice(Auto &, int price);
    
public:
    Auto(std::string autoName, int autoPrice) 
    { 
        name  = autoName; 
        price = autoPrice;
    }
    std::string getName(){ return name; }
    int getPrice() { return price; }
 
private:
    std::string name;     // название автомобиля
    int price;            // цена автомобиля
};

