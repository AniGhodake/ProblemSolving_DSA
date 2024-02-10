#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the num";
    cin>>num;
    for(int row=0;row<num;row++){
        for(int col=0;col<(row*2+1);col++){
            if(col&1==1)
            cout<<"* ";
            else
            cout<<row+1<<" ";
        }
        cout<<endl;
    }
}