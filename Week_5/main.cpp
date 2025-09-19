#include <iostream> 

using namespace std; 
int main() { 
    int option; 
    do { 
        showMenu(); 
        cout << "Enter your choice: "; 
        cin >> option; 

        if(option == 1 ){ 
            Add(); 
        } else if(option == 2){ 
            View(); 
        } else if(option == 3){ 
            Exit(); 
        } else { 
            cout << "Please choose a valid option !!!\n";
        }
        cout << endl; 
    } while (option != 3); 

    return 0; 
}
