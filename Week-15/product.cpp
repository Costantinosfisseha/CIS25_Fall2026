#include "Product.h"
#include <iostream>
using namespace std;

//constructor
Product::Product(int i, string n, float p) : id(i), name(n), price(p) {
    cout << "Constructor called\n";
}

//destructor
Product::~Product() {
    cout << "Destructor called\n";
}

//method to print product details
void Product::printDetails() {
    cout << "ID: " << id 
         << ", Name: " << name 
         << ", Price: $" << price << endl;
}
