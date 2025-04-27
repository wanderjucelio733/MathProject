#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;
    
    if (number1 > number2) {
        swap(number1, number2);
    }
    
    cout << "The larger of the two numbers is: " << number1 << endl;
    return 0;
}
