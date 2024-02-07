#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number";
    cin>>num;
   
    for(int row=0;row<num;row++){
         int flag=1;
        for(int col=0;col<row+num;col++){
            for(;col<num-row-1;col++){
                cout<<"  ";
            }
            if(col<num){
               cout<<flag<<" ";
               flag++;
            }           
            else{
                cout<<(--flag)-1<<" ";
            }
            
        }
        cout<<endl;
    }
}