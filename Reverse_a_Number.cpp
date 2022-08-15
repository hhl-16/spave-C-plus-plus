#include <iostream>
using namespace std;

int main(){
    int number;  
    int a=0,b=0;
    cout <<"enter number: "; 
    cin >> number;
    while(number !=0){
        a = number % 10;
        b = b*10 + a;
        number /= 10;
    }
    cout << b;
}