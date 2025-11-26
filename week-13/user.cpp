#include <iostream> 
using namespace std; 

#include "User.h"

using namespace std;

void User::accessLevel() {
    cout << "General Access " << endl;
}

void Employee::accessLevel() {
    cout << "General Access " << endl;
}

void InventoryManager::accessLevel() {
    cout << "Full Inventory Management Access " << endl;
}
