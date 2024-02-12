#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number";
    cin>>num;
    int count=1;
    for(int row=0;row<num;row++){
        for(int col=0;col<row+1;col++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}