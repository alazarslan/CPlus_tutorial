#include <iomanip>
#include <iostream>
#include "Vehicle.h"
#include "commissionEmployee.h"
#include "destructorDeneme.h"
using namespace std;
int main() {
    Car myCar;
    myCar.startVehicle(); // Vehicle sınıfından miras alınan fonksiyon
    myCar.playRadio();   // Car sınıfının kendi fonksiyonu
    myCar.startCar();

    // instantiate a CommissionEmployee object
    commissionEmployee employee(
    "Sue", "Jones", "222-22-2222", 10000, .06 );
    // set floating-point output formatting
    cout << fixed << setprecision( 2 );
    // get commission employee data
    cout << "Employee information obtained by get functions: \n"
    << "\nFirst name is " << employee.getFirstName()
    << "\nLast name is " << employee.getLastName()
    << "\nSocial security number is "
    << employee.getSocialSecurityNum()
    << "\nGross sales is " << employee.getGrossSales()
    << "\nCommission rate is " << employee.getCommissionRate() << endl;
    employee.setGrossSales( 8000 ); // set gross sales
    employee.setCommissionRate( .1 ); // set commission rate
    cout << "\nUpdated employee information output by print function: \n"
    << endl;
    employee.print(); // display the new employee information
    // display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl << endl;

    baseClass alaz("alaz",20);
    DerivedClass aziz("aziz",21);



    return 0;
}
