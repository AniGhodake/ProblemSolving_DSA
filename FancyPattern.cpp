#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    int flag=(num*3+2)/2;
    int flag2=flag;

    for(int row=0;row<num;row++,flag--,flag2--){
        for(int col=0;col<flag;col++){
            cout<<"* ";                                 //Part 1
        }

        for(int col1=0;col1<(row*2)+1;col1++){
            if(col1%2==0){
                cout<<row+1<<" ";                       //Part 2
            }
            else{
                cout<<"* ";
            }
        }

        for(int col2=0;col2<flag2;col2++){
            cout<<"* ";                                  //Part 3
        }
        cout<<endl;
    }       
}