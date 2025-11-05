#include <iostream>
#include <string>
#include "index.h"
#include <fstream>

using namespace std;

int main()
{
BankAccount obj;
obj.Deposit(100);
obj.Make_purchase(51);
obj.Print_balance();

    return 0;
}


