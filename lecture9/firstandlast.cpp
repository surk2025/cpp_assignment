#include<iostream>
using namespace std;

void fdigit(int n, int *f, int *l){
    *l = n%10;
    while(n>9){
        n/=10;
    }
    *f = n;
    return;
}

int main(){
    int n;
    cin>>n;
    int first,last;
    int *f = &first;
    int *l = &last;
    fdigit(n,f,l);
    cout<<first<<" "<<last;
}