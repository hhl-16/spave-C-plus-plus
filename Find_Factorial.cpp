#include <iostream>
using namespace std;

int main(){
    int n;
    int s=1;
    cout << "enter n: ";  
    cin >> n;
    for(int i = 1; i <=n; i++){
        s *=i;
    }
    cout << s << endl;
}