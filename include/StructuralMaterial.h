#ifndef STRUCTURALMATERIAL_H
#define STRUCTURALMATERIAL_H

#include <Material.h>


class StructuralMaterial : public Material
{
private:
protected:
public:
    StructuralMaterial();
    virtual ~StructuralMaterial();

    void printExtraFee() override;

    inline double totalAmount();
};

#endif // STRUCTURALMATERIAL_H
