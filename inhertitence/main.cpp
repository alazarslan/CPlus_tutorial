#include <iostream>
#include "Vehicle.h"
int main() {
    Car myCar;
    myCar.startVehicle(); // Vehicle sınıfından miras alınan fonksiyon
    myCar.playRadio();   // Car sınıfının kendi fonksiyonu
    myCar.startCar();
    return 0;
}
