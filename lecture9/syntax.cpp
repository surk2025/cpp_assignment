#include<iostream>
using namespace std;

int main(){
    int x;
    x = 5;
    int *p;
    p = &x;
    cout<<x<<endl; // value 5
    cout<<*p<<endl;// value 5
    cout<<p<<endl; // address 0x61ff08
    cout<<&x<<endl;// address 0x61ff08

}