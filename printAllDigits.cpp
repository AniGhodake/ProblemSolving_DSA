#include<iostream>
using namespace std;

void digits(int num){
    int digit;
    while(num){
        digit  = num%10;
        num = num/10;
        cout<<digit<<endl;
    }
}

int main(){
    int num;
    cout<<"Enter the value : ";
    cin>>num;
    digits(num);
}