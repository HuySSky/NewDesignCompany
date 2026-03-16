#ifndef FINISHINGMATERIAL_H
#define FINISHINGMATERIAL_H

#include <Material.h>

class FinishingMaterial : public Material
{
private:
protected:
    float packagingFee = 0;

public:

    FinishingMaterial(int cnt = 0, float price = 0, float packagingFee = 0);
    virtual ~FinishingMaterial();

    float getPackagingFee() {return packagingFee;}

    void printExtraFee() override;
    inline double totalAmount();
};

#endif // FINISHINGMATERIAL_H
