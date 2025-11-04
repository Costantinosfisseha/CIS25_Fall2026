#include <string>
#include <iostream>
using namespace std;
class Item{
    public://so it can be accessed from outside too 
    string name;
    int quantity;
};
void searchItem(Item items[], int size, string search_name);
