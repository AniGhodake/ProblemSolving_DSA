#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}

int main(){
    int num;
    cout<<"Enter the value of num";
    cin>>num;
    for(int n=2;n<=num;n++){
        int result = isPrime(n);
        if(result){
            cout<<n<<" is Prime Number"<<endl;
        }
    }
}