#include <iostream>

using namespace std;

void zeroBoth(int& p1, int& p2) {
  p1 = 0;
  p2 = 0;
}

int main(int argc, char *argv[])
{
    int num1 = 4;
    int num2 = 89;

    cout << "Before method call: " << num1 << ", " << num2 << endl;

    zeroBoth(num1, num2);

    cout << "After method call: " << num1 << ", " << num2 << endl;

    return 0;
}
