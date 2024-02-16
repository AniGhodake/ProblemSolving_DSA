#include<iostream>
using namespace std;
#include<vector>

void missingElements(int *a, int n){
//    vector<int>ans;
//     for(int i = 0;i<n; i++){
//         int index = abs(a[i]);
//         if(a[index-1]>0){
//            a[index-1] *= -1;
//         }
//     }

//     for(int i = 0 ; i< n; i++){                         // NEGATIVE MARKING METHOD
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;

//     int element;
//     for(int i = 0; i< n; i++){
//         if(a[i]>0){
//             element = i+1;
//            // cout<<"aniket";
//             ans.push_back(element);
//         }
//     }
//     for(int i = 0 ; i< ans.size(); i++){
//         cout<<ans[i]<<" ";
       
//     }
    for(int i = 0; i < n; ){
        if(a[a[i]-1]  != a[i]){
            swap(a[a[i]-1], a[i]);
        }
        else{
            i++;
        }
    }
    for(int i = 0; i< n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i = 0 ; i < n; i++){
        if(a[i]-1 != i){
            cout<<i+1<<" ";
        }
    }
     

}

int main(){
    int a[] = {1,3,4,3,4};
    int n = sizeof(a)/ sizeof(int);
     
    cout<<"Array elements : "<<endl;
    for(int i = 0 ; i< n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    missingElements(a,n);

  
    
}