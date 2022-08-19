#include <iostream>
using namespace std;
int main(){
    int number,n ;
    bool check = true;
    cout<<"enter number: ";  
    cin >> number;
    n = number /2;
    if(number==0 || number==1){
        check = false;
    }
    for(int i = 0; i < n; i++){
        if(number % 2 == 0){
            check = false;
            break;
        }
    }
    if(check ==1){
        cout << "true";
    }
    else {
        cout <<"not";
    }
}