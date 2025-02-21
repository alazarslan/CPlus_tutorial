//
// Created by alaz on 16.09.2024.
//

#include "superLigTakimlari.h"
using namespace std;
void superLigTakimlari::setTakimName(std::string takim) {
    takimKisaltmasi = takim;
}

std::string superLigTakimlari::getTakimName() {
    return takimKisaltmasi;
}

void superLigTakimlari::setKupaSayisi(int kupa) {
    kupaSayisi = kupa;
}

int superLigTakimlari::getKupaSayisi() {
    return kupaSayisi;
}

void superLigTakimlari::fanChant() {
    cout << "Herhangi bir anadolu takimi marsi" << endl<< endl;
}

void Galatasaray::fanChant() {
    cout << "En buyuk Cimbombom" << endl << endl;
}

void superLigTakimlari::print() {
    cout << "Takim: " << getTakimName() << endl
    << "Kupa: " << getKupaSayisi() << endl;
}

void Fenerbahce::fanChant() {
    cout << "Yasa Fenerbahce" << endl<< endl;
}

void Besiktas::fanChant() {
    cout << "Besiktas seninle olmeye geldik" << endl << endl;
}

void Galatasaray::uefa() {
    cout << "Bizim UEFA kupamiz var!" << endl;
}





