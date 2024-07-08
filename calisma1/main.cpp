#include <iostream>
using namespace std;

// Data Abstraction(veri soyutlama)
class Car {

private:
    // OOP'de buradaki ignite engine fonksiyonunu kullanıcının bilmesine gerek yok
    void igniteEngine() {
        cout << "Engine is ignited..." << endl;
    }

public:
    // kullanıcı arabayı nasıl çalıştıracağını bilir ama motorun nasıl çalışmasını bilmesine gerek yok
    void startCar() {
        igniteEngine();
        cout << "Car is started" << endl;
    }
};

/* 
 * Veri soyutlama, karmaşık bir sistemin sadece önemli detaylarını gösterip gereksiz detaylarını gizleme işlemidir.
 * Bu, kullanıcıların bir nesnenin ne yaptığını bilmesini sağlar, ancak nasıl yaptığını bilmesine gerek yoktur.
 * Soyutlama, kullanıcıların yalnızca gerekli arayüzü (interface) kullanarak nesne ile etkileşimde bulunmasını sağlar.
 *
 * Bu örnekte, Car sınıfı start metodu ile arabayı başlatma işlemini soyutlar.
 * igniteEngine metodu özel (private) olduğu için kullanıcı tarafından doğrudan erişilemez,
 * ancak start metodu aracılığıyla dolaylı olarak kullanılır. Kullanıcı, arabayı nasıl çalıştıracağını bilir,
 * ancak motorun nasıl ateşlendiği konusunda ayrıntılara ihtiyaç duymaz.
 */


int main() {
    Car myCar;
    myCar.startCar();
    return 0;
}
