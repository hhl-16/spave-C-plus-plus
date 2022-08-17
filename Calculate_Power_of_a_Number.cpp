#include <iostream>
using namespace std;
int main(){
    int number;  
    int exp;  
    int s = 1; 
    cout <<"number: ";
    cin >> number;
    cout <<" exp: ";
    cin >> exp;
    for(int i=1;i<=exp;i++){
        s *= number;
    }
    cout << s << endl;
}