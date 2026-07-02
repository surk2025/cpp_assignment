#include<iostream>
#include<string>
using namespace std;

int main(){
    string input;
    getline(cin,input);
    int count=0;
    for(int i=0;i<input.size();i++){
    if(input[i]=='a' ||input[i]=='e' ||input[i]=='i' ||input[i]=='o' ||input[i]=='u') count++;
    }
    cout<<count;
}