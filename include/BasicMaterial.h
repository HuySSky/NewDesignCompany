#ifndef BASICMATERIAL_H
#define BASICMATERIAL_H

#include <Material.h>

class BasicMaterial: public Material
{
private:
    float transportFeePct;

protected:
public:

    BasicMaterial(int cnt = 0, float price = 0, float transportFeePct = 0);
    virtual ~BasicMaterial();

    float getTransportFeePct() {return transportFeePct;}

    void printExtraFee() override;
    inline double totalAmount();
};


#endif // BASICMATERIAL_H
