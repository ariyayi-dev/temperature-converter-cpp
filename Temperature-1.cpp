#include <iostream>
using namespace std;
int main () {
    float temp;
    int choice;
    cout << "Enter tempreture:" ;
    cin >> temp;
    cout << "Choose Conversion:" << endl ;
    cout << "1. Celsius to Fahrenheit:" << endl ;
    cout << "2. Fahrenheit to Celsius:" << endl;
    cout << "Enter youre choice:";
    cin >> choice;   
    if (choice == 1) {
        temp = (temp * 9 / 5) + 32 ;
        cout << "Temperature in Fahrenheit: " << temp << endl;
    }
    if (choice == 2) {
        temp = ((temp - 32) * 5) / 9 ;
        cout << "Temperature in Celsius: " << temp << endl;
    }
    return 0;
}