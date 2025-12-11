#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    float price;

public:
    Product(int i, string n, float p);  
    ~Product();                         
    void printDetails();                
};

#endif
