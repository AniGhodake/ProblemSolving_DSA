#include<iostream>
using namespace std;
int main(){
    int num;  
    cout<<"Enter the Num"<<endl;
    cin>>num;
    int num1=num-1;
    for(int row=0;row<num;row++){
        for(int col=0;col<(num-row-1);col++){
            cout<<"  ";
        }
        for(int col=num-row-1;col<num+row;col++){
            if(row==0 || col==num-row-1 || col==(num+row)-1 )
            cout<<"* ";
            else{
                cout<<"  ";
            }
        }       
        cout<<endl;
    }



    for(int row=0;row<num1;row++){
        for(int col=0;col<row+1;col++){
            cout<<"  ";
        }
        for(int col=row+1;col<(2*num1-row-1)+1;col++){
            if(row==num1-1 || col==row+1 || col == (2*num1-row-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    
}