#include <iostream>
#include <Material.h>
#include <BasicMaterial.h>
#include <PaymentBill.h>
#include <FinishingMaterial.h>
#include <StructuralMaterial.h>
#include <iomanip>

using namespace std;

PaymentBill bill;

Worker* createWorker(string name, float work, float dongia)
{
    Worker *worker = new Worker();
    worker->setName(name);
    worker->setWork(work);
    worker->setDonGia(dongia);

    return worker;
}

void addWorker()
{
    auto worker1 = createWorker("An", 10, 10);
    auto worker2 = createWorker("Binh", 25, 100);
    auto worker3 = createWorker("Hung", 100, 150);

    bill.addWorker(worker1);
    bill.addWorker(worker2);
    bill.addWorker(worker3);

    //bill.printWorker();
}

void addMaterial()
{
    BasicMaterial *basic = new BasicMaterial();
    FinishingMaterial *finish = new FinishingMaterial();
    StructuralMaterial *structural = new StructuralMaterial();

    basic->setCount(10);
    basic->setPrice(10000);
    basic->setTransportFeePct(10);

    structural->setCount(5);
    structural->setPrice(15000);

    finish->setCount(20);
    finish->setPrice(20000);
    finish->setPackagingFee(30000);

    bill.addMaterial(basic);
    bill.addMaterial(structural);
    bill.addMaterial(finish);

    //bill.printMaterial();
}

int main()
{
    std::cout << std::fixed << setprecision(2);

    addWorker();
    addMaterial();

    bill.print();

    return 0;
}
