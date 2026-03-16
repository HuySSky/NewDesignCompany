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

    PaymentBill(std::string ID = "1", std::string date = "01/01/0001");
    virtual ~PaymentBill();

    std::string getID() { return ID; }
    std::string getDate() { return date; }

    double getTotalAmount() { return totalAmount; }

    void addWorker(Worker *worker);
    void addMaterial(Material *material);

    void print();
    void printWorker();
    void printMaterial();

};

#endif // PAYMENTBILL_H
