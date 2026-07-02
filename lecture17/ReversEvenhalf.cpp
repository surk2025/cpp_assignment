#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string input;
    getline(cin,input);
    int n = input.size();
    reverse(input.begin(),input.begin()+n/2);
    cout<<input;
}