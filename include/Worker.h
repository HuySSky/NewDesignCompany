#ifndef WORKER_H
#define WORKER_H

#include <string>

class Worker
{
private:
protected:
    std::string name;
    float work;
    float donGia; // khong hieu don gia la gi
public:

    Worker(std::string name = "", int work = 0, int donGia = 0);
    virtual ~Worker();

    std::string getName() { return name; }
    float getWork() { return work; }
    float getDonGia() { return donGia; }

    double getIncome();
    void print();
};

#endif // WORKER_H
