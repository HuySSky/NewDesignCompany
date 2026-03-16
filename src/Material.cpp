#include <Material.h>
#include <iostream>

Material::Material(int cnt, float price)
{
    if(cnt < 0) cnt = 0;
    if(price < 0) price = 0;

    this->count = cnt;
    this->price = price;
    type = MaterialType::STRUCTURAL;
}

Material::~Material()
{

}

double Material::totalAmount()
{
    return price * count;
}

void Material::printExtraFee()
{
    std::cout << "This material has no extra fee";
}

void Material::print()
{
    std::cout << "---------------\n";
    std::cout << getType() << '\n';
    std::cout << "Quantity: " << count << '\n';
    std::cout << "Price: " << price << '\n';
    std::cout << "Total amount: " << totalAmount() << '\n';
    printExtraFee(); std::cout << '\n';
    std::cout << "---------------\n";
}
