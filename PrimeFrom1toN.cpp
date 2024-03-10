#include<iostream>
using namespace std;

int isPrime(int num){
    for(int i = 2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter the value of N : ";
    cin>>num;
    for(int i = 2; i<num; i++){
        int result = isPrime(i);
        if(result){
            cout<<i<<endl;
        }
    }
}