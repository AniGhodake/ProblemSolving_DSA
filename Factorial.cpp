#include<iostream>
using namespace std;
int factorial(int num){
    long long result=1;
    for(int i=1;i<=num;i++){
        result = result*i;
        
    }
    return result;
}

int main(){
    int num;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    long long result = factorial(num);
    cout<<"Factorial of "<<num<<" is "<<result;
}