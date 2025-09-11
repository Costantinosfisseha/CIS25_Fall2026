# Largest of the three number 

# Description: This program takes 3 float variable and put the number in a condition,
# to see which of these number is the largest.

# Declartion of the variable and getting user input
   float n1,n2,n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

#  Its uses conditional logic (if-else) to compare the values and prints the largest number to the screen.  

if(n1 == n2 && n1 >= n3){
        cout << "Largest number: " << n1;
        }
    else if (n2 == n1 && n2 >= n3){
        cout << "Largest number: " << n2;
        }
    else if(n3 >= n1 && n3 >= n2){
        cout << "Largest number: " << n3;
      }
