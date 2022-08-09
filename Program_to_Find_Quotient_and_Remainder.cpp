#include <iostream>
using namespace std;
int main(){
    int number1,number2;
    int quotient, remainder;

    cout <<"input number1: "; 
    cin >> number1;
    cout <<"input number2: ";
    cin >> number2;
    quotient = number1/number2;
    remainder = number1%number2;
    cout <<"output quotient: " << quotient << endl;
    cout <<"output remainder: " << remainder << endl;


    return 0;
}