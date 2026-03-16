#include "PaymentBill.h"
#include <iostream>
#include <string>

PaymentBill::PaymentBill(std::string ID, std::string date)
{
    this->ID = ID;
    this->date = date;
}

PaymentBill::~PaymentBill()
{
    for(auto& fe: workers)
    {
        delete fe;
    }

    for(auto& fe: materials)
    {
        delete fe;
    }
}

void PaymentBill::addWorker(Worker *worker)
{
    workers.push_back(worker);
    totalAmount += worker->getIncome();
}

void PaymentBill::addMaterial(Material *material)
{
    materials.push_back(material);
    totalAmount += material->totalAmount();
}

void PaymentBill::printWorker()
{
    std::cout << "WORKER LIST: \n";
    for(auto &fe: workers)
    {
        fe->print();
    }
}

void PaymentBill::printMaterial()
{
    std::cout << "MATERIAL LIST: \n";
    for(auto &fe: materials)
    {
        fe->print();
    }
}

void PaymentBill::print()
{
    std::cout << "Payment bill: \n";
    printWorker();
    printMaterial();

    std::cout << "TOTAL AMOUNT: " << totalAmount << '\n';
}
