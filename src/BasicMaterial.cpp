#include <BasicMaterial.h>
#include <Material.h>
#include <iostream>

BasicMaterial::BasicMaterial()
{
    type = MaterialType::BASIC;
}

BasicMaterial::~BasicMaterial()
{

}

inline double BasicMaterial::totalAmount()
{
    return count*price*(1 + transportFeePct/100);
}

void BasicMaterial::printExtraFee()
{
    std::cout << "TransportFee (%): " << transportFeePct;
}
