//
// Created by alaz on 16.09.2024.
//

#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include "commissionEmployee.h"

class BasePlusCommissionEmployee : public commissionEmployee {
private:
    double baseSalary;
public:
    BasePlusCommissionEmployee(std::string fname, std::string lname, std::string ssn,
                               double sales = 0, double commRate = 0, double salary = 0);
    void setBaseSalary(double sales);
    double getBaseSalary() const;

    double earnings() const;
    void print() const;
};
#endif //BASEPLUSCOMMISSIONEMPLOYEE_H
