//
// Created by alaz on 26.08.2024.
//

#include "Article.h"

#include <iostream>
using namespace std;
int Article::count = 0;
Article::Article(long sayi, const string & isim, double para) {
    count++;
    artic_num = sayi;
    artic_name = isim;
    price = para;
    cout << "An object of type Article " << artic_name << " is created."
    << "This is the " << count << ". Article." << endl;
}

Article::~Article() {
    cout << "The object of type Article " << artic_name << " is destroyed."
    << "There are still " << count << ". Articles." << endl;
    count--;
}

void Article::print() {
    cout << "Name of article: " << getName() << endl;
    cout << "Number of article: " << getNum() << endl;
    cout << "Price of article: " << getPrice() << endl;
    cout << "Count: " << getCount << endl;
}

