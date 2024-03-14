#include<iostream>
using namespace std;
int main(){
    int num;
    int one;
    cin>>num;
    for(int row=0;row<num;row++){
        one=1;
        for(int col=0;col<num;col++){
            if(col<(num-row-1)){
                cout<<"  ";
            }
            else{
                
                cout<<one;
                cout<<" ";
                one++;
            }
                
        }
        for(int col=0;col<row;col++){
            cout<<one-2;
            cout<<" ";
            one--;
        }
        cout<<endl;

    }
}