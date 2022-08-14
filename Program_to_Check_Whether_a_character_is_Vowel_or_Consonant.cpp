#include <iostream>
using namespace std;
int main(){
    char c;  
    cout <<"enter char: ";
    bool check_input1,check_input2;
    cin >> c;
    check_input1 = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    check_input2 = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if(!(isalpha(c))){
        cout << "no char" << endl;
    }
    else if(check_input1||check_input2){
         cout << " is a vowel.";
    }
    else {
         cout << "is a consonant.";
    }

}