#ifndef MATERIAL_H
#define MATERIAL_H
#include <string>

enum MaterialType
{
    BASIC,
    STRUCTURAL,
    FINISHING
};
const std::string materialTypeString[] = {"Basic", "Structual", "Finishing"};

enum Unit
{};

class Material
{
private:
protected:
    MaterialType type = MaterialType::BASIC;
    Unit unit;
    int count = 0;
    float price = 0;

public:

    Material();
    virtual ~Material();

    std::string getType()
    {
        return materialTypeString[type];
    }

    Unit getUnit() {return unit;}
    Unit setUnit(Unit unit) {return this->unit = unit;}

    int getCount() {return count;}
    int setCount(int count)
    {
        if(count < 0)
        {
            count = 0;
        }

        return this->count = count;
    }

    float getPrice() {return price;}
    float setPrice(float price)
    {
        if(price < 0)
        {
            price = 0;
        }

        return this->price = price;
    }

    virtual void printExtraFee() = 0;

    virtual inline double totalAmount () = 0;
};
#endif // MATERIAL_H
