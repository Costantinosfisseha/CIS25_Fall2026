Item File I/O Program
#About
This simple C++ program demonstrates basic file input/output (I/O) operations using a custom Item class. It saves item data (name and quantity) to a text file and then reads the contents back from the file.

#Features
Defines an Item class with:

name: the name of the item 
quantity: the number of items

Saves item data to a file named items.txt

Reads and displays the contents of items.txt

#How It Works
An Item object is created in main() with predefined values.

saveToFile() writes the item data to items.txt in CSV format.

loadFromFile() reads and prints each line from items.txt.
