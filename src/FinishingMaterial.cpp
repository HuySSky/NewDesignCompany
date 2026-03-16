#include "FinishingMaterial.h"
#include <iostream>

FinishingMaterial::FinishingMaterial()
{
    type = MaterialType::FINISHING;
}

FinishingMaterial::~FinishingMaterial()
{
    //dtor
}

inline double FinishingMaterial::totalAmount()
{
    return count*price + packagingFee;
}

void FinishingMaterial::printExtraFee()
{
    std::cout << "Packaging fee: " << packagingFee;
}
