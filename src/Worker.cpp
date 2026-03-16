#include "Worker.h"
#include <iostream>

Worker::Worker(std::string name, int work, int donGia)
{
    this->name = name;
    this->work = work < 0 ? 0 : work;
    this->donGia = donGia < 0 ? 0 : donGia;
}

Worker::~Worker()
{
    //dtor
}

double Worker::getIncome()
{
    return work * 50000;
}

void Worker::print()
{
    std::cout << "---------------\n";
    std::cout << "Name: " << name << '\n';
    std::cout << "Number of works: " << work << '\n';
    std::cout << "Don gia: " << donGia << '\n';
    std::cout << "Thu nhap: " << getIncome() << '\n';
    std::cout << "---------------\n";
}
