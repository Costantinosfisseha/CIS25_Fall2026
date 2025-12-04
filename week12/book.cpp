#include "book.h" 
vector<string> splitCSV(const string& line) {
    vector<string> fields;//will hold each column
    stringstream ss(line);//stream the line
    string item;//one CSV field

    //read each value until comma is found
    while (getline(ss, item, ',')) {
        fields.push_back(item); //add value to list
    }

    return fields;  //return list of fields
}
