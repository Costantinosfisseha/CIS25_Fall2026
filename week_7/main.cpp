#include <iostream>
#include <string>
using namespace std;
#include "pointer.h"
int main() {
    struct Item {
        int id;
        string name;
    };

    int size = 100;
    Item* items = new Item[size];
    int* ids = new int[size];

    // Populate items with sample data
    for (int i = 0; i < size; i++) {
        items[i].id = i + 1;
        items[i].name = string("Name") + (i < 9 ? "00" : (i < 99 ? "0" : "")) + to_string(i + 1);
    }

    //sort items by name using bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (items[j].name > items[j + 1].name) {
                Item temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }

    // Copy sorted IDs into ids[]
    for (int i = 0; i < size; i++) {
        ids[i] = items[i].id;
    }

    // Ask user for ID to search
    int target;
    cout << "Enter your id: ";
    cin >> target;

    int x = binary_search(ids, size, target);

    if (x != -1) {
        cout << "ID = " << items[x].id << endl
             << "Name = " << items[x].name << endl;
    } else {
        cout << "Item not found." << endl;
    }

    // Free memory
    delete[] items;
    delete[] ids;

    return 0;
}
