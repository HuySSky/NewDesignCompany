#ifndef BASICMATERIAL_H
#define BASICMATERIAL_H

#include <Material.h>

class BasicMaterial: public Material
{
private:
    float transportFeePct = 0;

protected:
public:

    BasicMaterial();
    virtual ~BasicMaterial();

    float getTransportFeePct() {return transportFeePct;}
    float setTransportFeePct(float transportFeePct) {return this->transportFeePct = transportFeePct;}

    void printExtraFee() override;
    inline double totalAmount();
};


#endif // BASICMATERIAL_H
