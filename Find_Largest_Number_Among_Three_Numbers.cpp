#include <iostream>
using namespace std;
int main(){
    int number1,number2,number3;
    int max;
    cout << "number1: ";
    cin >> number1;
    cout << "number2: ";
    cin >> number2;
    cout << "number3: ";
    cin >> number3;

    if(number1 > number2){
        max = number1;
    }
    else{
        max = number2;
    }
    if(max > number3){
        cout << "max: " << max << endl;
    }
    else {
        cout << "max: "<<number3 << endl;
    }

}