#include <iostream>
using namespace std;

int main(){
    int number1;
    int number2 = 0;
    int a;
    cout << "enter number1: ";
    cin >> number1;
    do{
        a = number1 % 10; 
        cout << a << endl;

        number2 = number2*10 + a;
        cout << number2 << endl;

        number1 = number1 / 10; 
        cout << number1 << endl;
    }while(number1 != 0);
    cout << number2 << endl;
}