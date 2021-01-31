#include <iostream>

using namespace std;

float addTax (float taxPercent, float pretaxCost) {
  taxPercent = (taxPercent / 100) + 1.0;
  return pretaxCost * taxPercent;
}

int main(int argc, char *argv[])
{
    cout << addTax(10.0, 100.0);

    return 0;
}
