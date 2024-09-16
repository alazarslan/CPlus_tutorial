//
// Created by alaz on 16.09.2024.
//

#include "BasePlusCommissionEmployee.h"
using namespace std;
BasePlusCommissionEmployee::BasePlusCommissionEmployee(std::string fname, std::string lname,
                                                       std::string ssn, double sales,
                                                       double commRate, double salary)
: commissionEmployee(fname, lname, ssn, sales, commRate)
{
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    if (salary >= 0)
        baseSalary = salary;

    else {
        throw invalid_argument( "Salary must be >= 0.0" );
    }
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
    // derived class, base class'in private data memberlarına erişemediği için
    // getCommRate ve getGrossSale fonksyonlarını kullanmak zorunda kaldık
    return baseSalary + (getCommissionRate() * getGrossSales());
}

void BasePlusCommissionEmployee::print() const {
    cout << "base-salaried commission employee: " << getFirstName() << ' '
    << getLastName() << "\nsocial security number: " << getSocialSecurityNum()
    << "\ngross sales: " << getGrossSales()
    << "\ncommission rate: " << getCommissionRate()
    << "\nbase salary: " << baseSalary;
}




