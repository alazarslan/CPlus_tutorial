//
// Created by alaz on 26.08.2024.
//

#ifndef ARTICLE_H
#define ARTICLE_H
#include <iostream>
#include <ostream>
#include <string>
using namespace std;

class Article {
private:
    long artic_num;
    string artic_name;
    double price;
    static int count;
public:
    Article(long, const string&, double);
    Article(const Article& art)
    : artic_num(art.artic_num), artic_name(art.artic_name), price(art.price) {
        count++; cout << "Article copy constructor, count incremented by one." << endl;
    }
    ~Article();
    void print();

    long getNum() const{return artic_num;}

    string getName() const {return artic_name;}

    double getPrice() const {return price;}

    void setNum(const long& nu) {
        artic_num = nu;
    }
    void setName(const string& name) {
        artic_name = name;
    }
    void setPrice(const double& pr) {
        if (pr < 0) {
            price = pr;
        }
        price = pr;
    }

    static int getCount() {
        return Article::count;
    };
};



#endif //ARTICLE_H
