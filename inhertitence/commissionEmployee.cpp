//
// Created by alaz on 16.09.2024.
//

#include "commissionEmployee.h"
using namespace std;

commissionEmployee::commissionEmployee(const std::string &fname, const std::string &lname,
                                       const std::string &ssn, const double &sales,
                                       const double &commRate) {
    firstName = fname;
    lastName = lname;
    socialSecurityNum = ssn;
    setGrossSales(sales);
    setCommissionRate(commRate);
}

void commissionEmployee::setFirstName(const std::string &fname) {
    firstName = fname;
}

void commissionEmployee::setLastName(const std::string &lname) {
    lastName = lname;
}

void commissionEmployee::setSocialSecurityNum(const std::string &ssn) {
    socialSecurityNum = ssn;
}

string commissionEmployee::getFirstName() const {
    return firstName;
}

string commissionEmployee::getLastName() const {
    return lastName;
}

string commissionEmployee::getSocialSecurityNum() const {
    return socialSecurityNum;
}

void commissionEmployee::setGrossSales(const double &sales) {
    if (sales >= 0) {
        grossSales = sales;
    }
    else {
        // burayı pdften aldım
        throw invalid_argument( "Gross sales must be >= 0.0" );
    }
}

double commissionEmployee::getGrossSales() const {
    return grossSales;
}

void commissionEmployee::setCommissionRate(const double &commRate) {
    if (commRate >= 0 && commRate <= 1) {
        commissionRate = commRate;
    }
    else {
        throw invalid_argument( "Commission rate must be > 0.0 and < 1.0" );
    }
}

double commissionEmployee::getCommissionRate() const {
    return commissionRate;
}

double commissionEmployee::earnings() const {
    return commissionRate * grossSales;
}

void commissionEmployee::print() const {
    cout << "commission employee: " << firstName << ' ' << lastName
    << "\nsocial security number: " << socialSecurityNum
    << "\ngross sales: " << grossSales
    << "\ncommission rate: " << commissionRate;
}





