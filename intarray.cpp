#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
   int numberArray[10] = { }; //Initialize array
   int uInput; //User input tracker.

   for (int i = 0; i < 10; ++i) {
     cout << "Input number " << i << ". It must be positive. If you do not want to add any other numbers, input a negative value." << endl; //Records numbers
     cin >> uInput;

     if (uInput < 0) {              //Checks for valid input
       break;
     }
     numberArray[i] = uInput;
   }

   for (int i = 0; i < 10; ++i) {   //Print from array.
     if (numberArray[i] < 0) {
       break;
     }
     cout << "Number " << (i+1) << ": " << numberArray[i] << endl;
   }
}
