#include "FinishingMaterial.h"
#include <iostream>

FinishingMaterial::FinishingMaterial(int cnt, float price, float packagingFee): Material(cnt, price)
{
    type = MaterialType::FINISHING;

    this->packagingFee = packagingFee;
}

FinishingMaterial::~FinishingMaterial()
{
    //dtor
}

double FinishingMaterial::totalAmount()
{
    return count*price + packagingFee;
}

void FinishingMaterial::printExtraFee()
{
    std::cout << "Packaging fee: " << packagingFee;
}
