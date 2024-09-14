#include <iostream>

class Square;

class Shapes{
public:
    double findArea(const Square& s);
};

class Square {
private:
    int side;
public:
    Square(int side = 0) : side(side) {};
    int getSide() { return side; }

    // başka bir class'ın member fonksiyonunu friend yapma
    friend double Shapes::findArea(const Square& s);

    // standalone(classlar dışındaki bir fonk) fonksiyonu friend yapma
    friend void updateSquare(Square& s, int sside);

    friend class Foo;
};

class Foo {
public:
    int getSide(const Square& s);
};

int Foo::getSide(const Square &s) {
    return s.side;
}

double Shapes::findArea(const Square &s) {
    return s.side * s.side;
}

void updateSquare(Square& s, int sside) {
    s.side = sside;
}

int main() {
    Shapes shape1;
    Square sq(3);
    Foo f;
    std::cout << shape1.findArea(sq) << std::endl;
    std::cout << f.getSide(sq) << std::endl;
    updateSquare(sq, 5);
    std::cout << f.getSide(sq) << std::endl;
    return 0;
}
