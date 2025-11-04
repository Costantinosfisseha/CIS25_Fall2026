#include "index.h"
#include <iostream>
#include <fstream>
using namespace std;

//searching by name
void searchItem(Item items[], int size, string search_name){
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (items[i].name == search_name) {
            cout << "Item found: " << items[i].name 
                 << " | Quantity: " << items[i].quantity << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Item not found in inventory." << endl;
}
