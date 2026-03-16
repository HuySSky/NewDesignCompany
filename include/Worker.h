#ifndef WORKER_H
#define WORKER_H

#include <string>

class Worker
{
private:
protected:
    std::string name;
    float work = 0;
    float donGia = 0; // khong hieu don gia la gi
public:
    Worker();
    virtual ~Worker();

    std::string getName() { return name; }
    std::string setName(std::string val) {return name = val; }

    float getWork() { return work; }
    float setWork(float val) {return work = val; }

    float getDonGia() { return donGia; }
    float setDonGia(float val) {return donGia = val; }

    double getIncome();
};

#endif // WORKER_H
