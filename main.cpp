#include <iostream>
#include <Material.h>
#include <BasicMaterial.h>
#include <PaymentBill.h>
#include <FinishingMaterial.h>
#include <iomanip>

using namespace std;

PaymentBill bill;

void addWorker()
{
    auto *worker1 = new Worker {"An", 10, 10};
    auto worker2 = new Worker {"Binh", 25, 100};
    auto worker3 = new Worker {"Hung", 100, 150};

    bill.addWorker(worker1);
    bill.addWorker(worker2);
    bill.addWorker(worker3);

    //bill.printWorker();
}

void addMaterial()
{
    auto *basic = new BasicMaterial {10, 10000, 10};
    auto *finish = new FinishingMaterial {20, 20000, 30000};
    auto *structural = new Material {5, 15000};

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
