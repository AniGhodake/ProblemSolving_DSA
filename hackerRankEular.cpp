using namespace std;
#include<iostream>



int main(){
    int t;
    cin >> t;
    int n;
    int sum=0;
    for(int a0 = 0; a0 < t; a0++){
        //int n;
        cin >> n;
        sum=0;
        
        for(int i = 0; i<n; i++){
            if(i%3==0 || i%5==0){
                sum = sum + i;
        
            }
        }
        cout<<sum<<endl;
        
    } 
    return 0;
}