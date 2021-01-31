#include <iostream>

using namespace std;

float getInput() { //Records input from user in feet an inches, then converts inches to feet and returns value
  float feet;
  float inches;
  cout << "Feet: " << endl;
  cin >> feet;
  cout << "Inches: " << endl;
  cin >> inches;
  feet += (inches/12.0);
  return feet;
}

void calculateConversion(float& feet) {  // Converts to meters.
  feet *= 0.3048;
}

void printOutput(float metric) { //Prints in meters, then in centimeters.
  cout << "The inputted distance, in metrics, is " << metric << " meters, or " << metric * 100 << " centimeters.";
}

int main(int argc, char *argv[])
{
    float feet = getInput();
    calculateConversion(feet);
    printOutput(feet);
    return 0;
}
