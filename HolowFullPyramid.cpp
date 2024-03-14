#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(int row=0;row<num;row++){
    int col =0;
        for(col=0;col<num-row-1;col++){
            cout<<"  ";
            
        }
        for(col=col;col<num+row;col++){
            if(row==0 || row==(num-1) || col==(num-row-1)|| col ==num+row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
            
        }
        cout<<endl;
    }
}