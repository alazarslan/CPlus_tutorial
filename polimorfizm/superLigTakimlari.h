//
// Created by alaz on 16.09.2024.
//

#ifndef SUPERLIGTAKIMLARI_H
#define SUPERLIGTAKIMLARI_H
#include <iostream>


class superLigTakimlari {
private:
    std::string takimKisaltmasi;
    int kupaSayisi;
public:
    superLigTakimlari(std::string takim = "Anadolu Takimi", int kupa = 0)
    : takimKisaltmasi(takim), kupaSayisi(kupa) {}

    ~superLigTakimlari() {}

    void setTakimName(std::string takim);
    std::string getTakimName();

    void setKupaSayisi(int kupa);
    int getKupaSayisi();

    void fanChant();
    void print();
};

class Galatasaray : public superLigTakimlari {
public:
    Galatasaray() {
        setTakimName("GS");
        setKupaSayisi(24);
        std::cout << "Galatasaray Constructor" << std::endl;
    }

    ~Galatasaray() {}

    void fanChant();
    void uefa();
};

class Fenerbahce : public superLigTakimlari {
public:
    Fenerbahce() {
        setTakimName("FB");
        setKupaSayisi(19);
        std::cout << "Fenerbahce Constructor" << std::endl;
    }

    ~Fenerbahce() {}

    void fanChant();

};

class Besiktas : public superLigTakimlari {
public:
    Besiktas() {
        setTakimName("BJK");
        setKupaSayisi(16);
        std::cout << "Besiktas Constructor" << std::endl;
    }

    ~Besiktas() {}

    void fanChant();

};



#endif //SUPERLIGTAKIMLARI_H
