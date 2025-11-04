// main.cpp
#include <iostream>
#include "index.h"
using namespace std;

int main() {
    Item tool;
    tool.name = "Screwdriver";
    tool.quantity = 10;

    tool.saveToFile();
    tool.loadFromFile();

    return 0;
}
