#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter The Number";
    cin>>num;
    for(int row=0;row<num;row++){
        for(int col=0;col<num;col++){
            if(row==0)
                cout<<col+1;
            else if(col==0)
                cout<<row+1;
            else if(row+col+1==num)
                cout<<num;
            else
                cout<<" ";
        }
        cout<<endl;
        
    }
    
}