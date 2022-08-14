#include <iostream>
#include <cmath>

using namespace std;
int main(){
    float a,b,c;
    float detal;
    float x,x1,x2;
    cout<<"enter a: ";
    cin >> a;
    cout<<"enter b: ";
    cin >> b;
    cout<<"enter c: ";
    cin >> c;
    detal = pow(b,2) - 4*a*c;
    if(detal > 0 ){
        x1 = (-b + sqrt(detal)) / (2*a);
        x2 = (-b - sqrt(detal)) / (2*a);
        cout<<x1<<" "<<x2<<endl;
    }
    else if(detal < 0){
        cout << "the roots are complex and different";
    }
    else{
        x1 = x2 = (-b)/(2*a);
        cout << x1 << " " << x2 <<endl;
    }

}