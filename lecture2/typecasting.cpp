#include<iostream>
using namespace std;

int main(){
    float x;
    cout<<"enter the float value of x = ";
    cin>>x;
    int y;
    y = (int)x;
    cout<<"int value of x = "<<(y)<<endl;
    cout<<"point value of x = "<<(float)x-(int)y;

}