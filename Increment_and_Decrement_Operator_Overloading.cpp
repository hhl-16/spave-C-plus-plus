#include <iostream>
using namespace std;

class check{
    private:
        int i;
    public:
        check():i(0){}
        void operator ++(){
            ++i;
        }
        void display(){
            cout << i <<endl;
        }
};
int main(){
    check a;
    a.display();
    ++a;
    a.display();


}