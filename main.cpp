#include <iostream>
using namespace std;

void func(int decimal, int base){
    int remainder;
    remainder = decimal;
    if (remainder<base){
        if (remainder<10){
            cout << remainder;
        } else if (remainder==10){
            cout << "A";
        } else if (remainder==11){
            cout << "B";
        } else if (remainder==12){
            cout << "C";
        } else if (remainder==13){
            cout << "D";
        } else if (remainder==14){
            cout << "E";
        } else if (remainder==15){
            cout << "F";
        } else {
            cout << "only upto hexadecimal :(";
        }
    } else {
        remainder = decimal % base;
        if (remainder<10){
            cout << remainder;
        } else if (remainder==10){
            cout << "A";
        } else if (remainder==11){
            cout << "B";
        } else if (remainder==12){
            cout << "C";
        } else if (remainder==13){
            cout << "D";
        } else if (remainder==14){
            cout << "E";
        } else if (remainder==15){
            cout << "F";
        } else {
            cout << "only upto hexadecimal :(";
        }
        func((decimal - remainder) / base,base);
    }
}

int main(){
    int decimal; int base;
    cin >> decimal >> base ;
    func(decimal,base);
    return 0;
}