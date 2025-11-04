#include <string>
#include <iostream>
#include "index.h"

using namespace std;
int main()
{
const int SIZE=5;//const means unchangable
Item inventory[SIZE];//creating an object array
for(int i=0;i<SIZE;i++){//lopping through the array by taking userinput 
    cout<<"Enter name for item "<<i + 1<<": ";
    cin>>inventory[i].name;
    cout<<"Enter quantity for "<<inventory[i].name<<": ";
    cin>>inventory[i].quantity;
    cout<<endl;
}

cout<<"******Inventory Lists*******"<<endl;//displaing all the lists 
for(int i=0;i<SIZE;i++){
    cout<<inventory[i].name<<" -Quantity "<<inventory[i].quantity<<endl;
    
}
string search_name;
    cout<<"\nEnter item name to search: ";
    cin>>search_name;
    searchItem(inventory, SIZE, search_name);

    return 0;
}


