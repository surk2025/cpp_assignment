#include<iostream>
using namespace std;

int main(){
    int x,y;
    char ch;
    cout<<"calculate between two number one operator(+,-,*,/,%) : ";
    cin>>x>>ch>>y;
    switch(ch){
        case '+':cout<<"result: "<<(x+y);
               break;
        case '-':cout<<"result: "<<(x-y);
               break;
        case '*':cout<<"result: "<<(x*y);
               break;
        case '/':cout<<"result: "<<(x/y);
               break;
        case '%':cout<<"result: "<<(x%y);
               break;       
    }
}