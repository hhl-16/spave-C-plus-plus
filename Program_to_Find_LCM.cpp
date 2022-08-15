#include <iostream>
using namespace std;

int main(){
    int number1,number2;  
    int kq;
    int max_number;
    cout <<"enter number1: ";
    cin >> number1;
    cout <<"enter number2: ";
    cin >> number2;
    if(number1 > number2)
    {
        max_number = number1;
    }
    else{
        max_number = number2;
    }
    do{
        max_number ++;
        if((max_number % number1 == 0) && (max_number % number2 ==0)){
            kq =max_number;
            break;
        }
    }while(1);
    cout << kq << endl;
}