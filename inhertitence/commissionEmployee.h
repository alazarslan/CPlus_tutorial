//
// Created by alaz on 16.09.2024.
//

#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <iostream>

class commissionEmployee {
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNum;
    double grossSales;
    double commissionRate;
public:
    commissionEmployee(const std::string& fname, const std::string& lname,
                       const std::string& ssn, const double& sales = 0,
                       const double& commRate = 0);

    void setFirstName(const std::string& fname);
    std::string getFirstName() const;

    void setLastName(const std::string& lname);
    std::string getLastName() const;

    void setSocialSecurityNum(const std::string& ssn);
    std::string getSocialSecurityNum() const;

    void setGrossSales(const double& sales);
    double getGrossSales() const;

    void setCommissionRate(const double& commRate);
    double getCommissionRate() const;

    double earnings() const;
    void print() const;
};



#endif //COMMISSIONEMPLOYEE_H
