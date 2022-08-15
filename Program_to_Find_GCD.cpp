#include <iostream>
using namespace std;
int main(){
    int number1,number2;
    int index;  
    int kq;
    cout <<"enter number1: ";
    cin >> number1;
    cout <<"enter number2: ";
    cin >> number2;
    if(number1 > number2){
        index = number2;
    }
    else{
        index = number1;
    }
    for(int i=index;i>=0;i--){
        if(number1 % i == 0){
            if(number2 % i == 0){
                kq = i;
                break;
            }
        }
    }
    cout << kq << endl;

}