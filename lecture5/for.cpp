#include<iostream>
using namespace std;


int main(){
    //using for loop check given number is strong number or not
    int number,digit,factorial,strong_number,start,end;
    cout<<"enter the range : ";
    cin>>start>>end;
    for(int i=start;i<=end;i++){ 
        number = i;
        strong_number = 0;
        while(number>0){
            digit = number%10 ;
            factorial = 1;
            for(int j=1;j<=digit;j++){
                factorial*=j;
            }
            number /=10;
            strong_number += factorial ;
        }
                if(strong_number==i)
                    cout<<i<<endl;    
    } 
    
}