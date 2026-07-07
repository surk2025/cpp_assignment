#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "1234567";
    int arr = stoi(str);
    cout<<arr<<endl;

    string s = "1234567890987654321";
    long long x = stoll(s);
    cout<<x;

}