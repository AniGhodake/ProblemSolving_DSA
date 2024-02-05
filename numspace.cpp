#include<iostream>
using namespace std;
int main(){
    int num;
    int cp;
    cout<<"Enter the num";
    cin>>cp;
    num= cp-2;
    int flag =1;
    for(int row=0;row<num;row++){
        if(row==0){
                cout<<row+1<<endl;
            }
        for(int col=0;col<num+row;col++){                /// FAILED CASE
          if(row==num-1 ||col==0){
            if(flag==2)
            cout<<" ";
            else cout<<col+1<<"* ";
          }
          else{
            cout<<"# ";
          }

          
          if(row==num-1 && col==num+row-1 && flag==1){
            row--;
            flag++;
          }
        }
        cout<<endl;      
    }
}