#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter The Number";
    cin>>num;
    for(int row=0;row<num;row++){
        for(int col=0;col<num-row;col++){
            cout<<col+1;
           
        }
        cout<<endl;
        
    }
    
}