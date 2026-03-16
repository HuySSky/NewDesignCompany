#include "StructuralMaterial.h"
#include <iostream>

StructuralMaterial::StructuralMaterial()
{
    type = MaterialType::STRUCTURAL;
}

StructuralMaterial::~StructuralMaterial()
{
    //dtor
}

inline double StructuralMaterial::totalAmount()
{
    return count*price;
}

void StructuralMaterial::printExtraFee()
{
    std::cout << "This material has no extra fee";
}
