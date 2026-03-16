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
    MaterialType type;
    Unit unit;
    int count;
    float price;

public:

    Material(int cnt = 0, float price = 0);
    virtual ~Material();

    std::string getType()
    {
        return materialTypeString[type];
    }

    Unit getUnit() {return unit;}
    int getCount() {return count;}
    float getPrice() {return price;}

    virtual void printExtraFee ();

    virtual double totalAmount ();
    virtual void print();
};
#endif // MATERIAL_H
