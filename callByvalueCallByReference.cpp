#include<iostream>
using namespace std;

void referenceVariable(int &n){
    n = n * 109;
}

void incrementByOne(int &c){
    c = c+1;
    cout<<"inside incrementByOne c : "<<&c<<endl;
}

int incrementBy1(int n){
    n = n+1;
    cout<<"inside incrementBy1  n : "<<&n<<endl;
    return n;
}

int main(){
    //int n= 5;
    // int &k = n;
    // int &c = n;

    // cout<<n<<endl;
    // cout<<k<<endl;
    // cout<<c<<endl;
    int n;
    cin>>n;
    referenceVariable(n);
   // n = incrementBy1(n);
   //incrementByOne(n);
    cout<<"inside main n : "<<n<<endl;
    // cout<<"inside main n : "<<&n<<endl;
    return 0;

}