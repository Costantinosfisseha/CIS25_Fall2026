#include "book.h"   
#include <iostream>      
#include <fstream>       
#include <sstream>       
#include <vector> 
#include <string>       

using namespace std;

int main() {

    //Open dataset file 
    ifstream file("books_Christanity.txt");

    //if file cannot open, show error
    if (!file.is_open()) {
        cout << "Error: Could not open file.\n";
        return 1;               
    }

    string line;//will store each line from file

    getline(file, line);//skip header row of CSV

    vector<Book> books; //list to store Book objects

    int maxRows = 5;//how many books you want to load (change this number)
    int count = 0;//counter to stop after maxRows

    // Loop through file line by line
    while (getline(file, line) && count < maxRows) {

        auto fields = splitCSV(line);//split CSV row into separate values

        if (fields.size() >= 6) {//make sure we have enough columns
            books.emplace_back(fields);//create Book object & add to vector
            count++;//increase counter
        }
    }

    file.close();//close the file

    //show how many books were loaded
    cout << "\nLoaded " << books.size() << " Christian books:\n\n";

    //print each book's data
    for (const auto& book : books) {
        book.display();         
    }
    return 0;
}
