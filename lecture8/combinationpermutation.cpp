#include<iostream>
using namespace std;
int factorial(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
     fact*=i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int r;
    cout<<"enter the value of r: ";
    cin>>r;
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"combination : "<<ncr<<endl;
    int npr = factorial(n)/factorial(n-r);
    cout<<"permutation : "<<npr;
    

}