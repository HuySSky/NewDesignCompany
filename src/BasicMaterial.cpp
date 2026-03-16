#include <BasicMaterial.h>
#include <Material.h>
#include <iostream>

BasicMaterial::BasicMaterial(int cnt, float price, float transportFeePct): Material(cnt, price)
{
    type = MaterialType::BASIC;

    this->transportFeePct = transportFeePct;
}

BasicMaterial::~BasicMaterial()
{

}

double BasicMaterial::totalAmount()
{
    return count*price*(1 + transportFeePct/100);
}

void BasicMaterial::printExtraFee()
{
    std::cout << "TransportFee (%): " << transportFeePct;
}
