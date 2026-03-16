#ifndef PAYMENTBILL_H
#define PAYMENTBILL_H

#include <Worker.h>
#include <Material.h>
#include <vector>
#include <string>

class PaymentBill
{
private:
protected:
    std::string ID;
    std::string date;
    double totalAmount = 0;

    std::vector<Worker*> workers;
    std::vector<Material*> materials;

public:

    PaymentBill();
    virtual ~PaymentBill();

    std::string getID() { return ID; }
    std::string setID(std::string val) {return ID = val; }

    std::string getDate() { return date; }
    std::string setDate(std::string val) {return date = val; }

    double getTotalAmount() { return totalAmount; }
    void calTotalAmount(double val);

    void addWorker(Worker *worker);
    void addMaterial(Material *material);

    void print();
    void printWorker();
    void printMaterial();

};

#endif // PAYMENTBILL_H
