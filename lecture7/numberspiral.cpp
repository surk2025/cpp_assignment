#include<iostream>
using namespace std;

int main(){
    // print star square pattern
    int square;
    cout<<"enter the value of side of square :";
    cin>>square;
    int a=1;
    for(int i=1;i<=2*square-1;i++){
        for(int j=1;j<=2*square-1;j++){
            int a = i;
            int b = j;
            if(a>square) a = 2*square-i;
            if(b>square) b = 2*square-j;
            int x=min(a,b);
            cout<<square-x+1;
        }
        cout<<endl;
    }
}