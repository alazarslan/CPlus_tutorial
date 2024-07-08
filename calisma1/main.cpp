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

// Data encapsulation
// sınıfın verilerini private kısmında tutarak erişimi kısıtlıyoruz,
// bu sayede kullanıcının kazara bu önemli verileri değiştirmesine engel oluyoruz
// ve sınıfın üzerinde kontrolü sağlıyoruz
class Student {
private:
    int stuNum;
    string stuName;

public:
    int getStudentNumber() {
        return stuNum;
    }

    string getStudentName() {
        return stuName;
    }

    void setStudentNum(int num){
        stuNum = num;
    }
    void setStudentName(string name) {
        stuName = name;
    }
};

/*
 * Veri kapsülleme, veriyi ve bu veriye erişim yöntemlerini (metotları) tek bir birimde (sınıfta) birleştirme işlemidir.
 * Bu, veriyi koruma altına alır ve doğrudan erişimi engelleyerek veri üzerinde kontrol sağlar.
 * Kapsülleme, veri üyelerini genellikle özel (private) yaparak ve bu verilere erişimi sınırlamak için
 * ortak (public) getter ve setter metotları kullanarak gerçekleştirilir.
 */

int main() {
    Car myCar;
    myCar.startCar();

    Student Alaz;
    Alaz.setStudentName("Alaz");
    Alaz.setStudentNum(109);
    cout << Alaz.getStudentName() << endl;
    cout << Alaz.getStudentNumber() << endl;

    return 0;
}
