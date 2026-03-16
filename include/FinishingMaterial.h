#ifndef FINISHINGMATERIAL_H
#define FINISHINGMATERIAL_H

#include <Material.h>

class FinishingMaterial : public Material
{
private:
protected:
    float packagingFee = 0;

public:

    FinishingMaterial();
    virtual ~FinishingMaterial();

    void setPackagingFee(float val)
    {
        if(val < 0)
        {
            val = 0;
        }

        packagingFee = val;
    }
    float getPackagingFee() {return packagingFee;}

    void printExtraFee() override;
    inline double totalAmount();
};

#endif // FINISHINGMATERIAL_H
