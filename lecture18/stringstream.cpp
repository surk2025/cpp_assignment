#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

int main(){
    
    string input;
    getline(cin,input);
    stringstream ss(input);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}