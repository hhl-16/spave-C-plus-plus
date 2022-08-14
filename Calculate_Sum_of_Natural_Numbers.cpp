#include <iostream>
using namespace std;
int main(){
    int n,s = 0;
    cout <<"enter n: " ;
    cin >> n ;
    for(int i=0; i<=n; i++){   
        s += i ;
    }

    cout <<"sum: " << s;

}