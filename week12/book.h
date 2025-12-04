#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include <string>
#include <vector>
#include <sstream>
#include "book.h"

using namespace std;

class Book {
public:
    string title, author, description, pages, genres, rating;//6 fields from CSV

    //constructor takes a vector of CSV fields and assigns to member variables
    Book(const vector<string>& fields) {
        title       = fields[0];//column 1
        author      = fields[1]; 
        description = fields[2];   
        pages       = fields[3];  
        genres      = fields[4];   
        rating      = fields[5];   
    }

    //prints the book information nicely
    void display() const {
        cout << "-------------------------\n"; 
        cout << "Title: "   << title   << endl;//print title
        cout << "Author: "  << author  << endl; 
        cout << "Pages: "   << pages   << endl;   
        cout << "Genres: "  << genres  << endl;  
        cout << "Rating: "  << rating  << endl;
    }
};

vector<string> splitCSV(const string& line);
#endif
