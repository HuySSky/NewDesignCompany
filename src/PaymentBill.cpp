#include "PaymentBill.h"
#include <iostream>


PaymentBill::PaymentBill()
{
    //ctor
}

PaymentBill::~PaymentBill()
{
    //dtor
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
        std::cout << "---------------\n";
        std::cout << "Name: " << fe->getName() << '\n';
        std::cout << "Number of works: " << fe->getWork() << '\n';
        std::cout << "Don gia: " << fe->getDonGia() << '\n';
        std::cout << "Thu nhap: " << fe->getIncome() << '\n';
        std::cout << "---------------\n";
    }
}

void PaymentBill::printMaterial()
{
    std::cout << "MATERIAL LIST: \n";
    for(auto &fe: materials)
    {
        std::cout << "---------------\n";
        std::cout << fe->getType() << '\n';
        std::cout << "Quantity: " << fe->getCount() << '\n';
        std::cout << "Price: " << fe->getPrice() << '\n';
        std::cout << "Total amount: " <<fe->totalAmount() << '\n';
        fe->printExtraFee(); std::cout << '\n';
        std::cout << "---------------\n";
    }
}

void PaymentBill::print()
{
    std::cout << "Payment bill: \n";
    printWorker();
    printMaterial();

    std::cout << "TOTAL AMOUNT: " << totalAmount << '\n';
}
