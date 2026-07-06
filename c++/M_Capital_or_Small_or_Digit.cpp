#include <iostream>
using namespace std;

int main(){
    char X;
    cin>> X;


    if(X>= '0' && X <= '9'){
        cout<< "IS DIGIT"<< "\n";
    }
    else {
        cout<< "ALPHA\n";
        if(X>= 'a' && X<= 'z'){
            cout<< "IS SMALL\n";
        }else {
            cout<< "IS CAPITAL\n";
        }
    }



    return 0;
}