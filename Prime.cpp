#include<iostream>
#include<cmath>
using namespace std;

bool Prime(int num){
    for(int start=2;start<sqrt(num);start++){
        if(num%start==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    bool result = Prime(num);
    if(result){
        cout<<"Entered Number "<<num<<" is prime number";
    }
    else{
        cout<<"Entered Number "<<num<<" is not a prime number";
    }
}