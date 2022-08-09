#include <iostream>
using namespace std;
int main(){

    int number1,number2;
    int s;
    cout << "input number1: ";
    cin >> number1;
    cout << "input number2: ";
    cin >> number2;

    cout << "before swap: " << number1 << " " << number2 << endl;
    s = number1;
    number1 = number2;
    number2 = s;
    cout << "after swap: " << number1 << " " << number2;



    return 0;
}