#include <iostream>
using namespace std;


class plex{
    private:
        float real;
        float imag;
    public: 
        plex():real(0),imag(0) {}
        void input(){ 
            cout <<"enter real: ";
            cin >> real;
            cout <<"enter imag: ";
            cin >> imag;
        }
        plex operator - (plex x){
            plex temp;
            temp.real = real - x.real;
            temp.imag = imag - x.imag;
            return temp;
        }
        void output(){
            if(imag <0 ){
                cout <<real <<imag <<"i"<<endl;
            }
            else {
                cout << real << "+" << imag << "i" << endl;
            }

        }
};

int main(){
    plex c1,c2,result;
    c1.input();
    c2.input();

    result = c1 - c2;
    result.output();

}