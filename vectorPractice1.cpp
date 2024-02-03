#include<iostream>
using namespace std;
#include<vector>

int vectorPrint(vector<int>v){
    cout<<"vector elements are as follows : ";
    for(auto iterator : v ){
        cout<<iterator<<" ";
    }
    cout<<endl;
}

int vectorPrint2(vector<char>v){
    cout<<"vector elements are as follows : ";
    for(auto iterator : v ){
        cout<<iterator<<" ";
    }
    cout<<endl;
}


int main(){
    // vector<int>v ;
    // v.push_back(3);
    // v.push_back(2);
    // v.push_back(5);
    // v.push_back(7);
    // v.push_back(9);

    // cout<<v.capacity();
    // cout<<endl;
    // cout<<v.size();
    // cout<<endl;
    // cout<<v.at(3);
    // v.pop_back();
    // v.pop_back();
    // cout<<endl;
    // for(auto i : v){
    //     cout<<i<<endl;
    // }
    // cout<<endl;
    // cout<<v.front();
    // cout<<endl;
    // cout<<v.back();
    // cout<<endl;
    //vectorPrint(v);


    // vector<int>w(6, 10);
    // vectorPrint(w);
    // w.push_back(67);
    // vectorPrint(w);


//     vector<char>c (6 ,'a');                  //  
//     vector<char>c (6 ,'aniket');             //  IT WILL PRINT THE CHARACTER " T "  6TH TIMES
//     vectorPrint2(c);

    
    // vector<int>a(5,6);
    // w =a;
    // vectorPrint(w);



    // vector<int> arr5 = {1,2,3,4,5};
    // vector<int>arr6(arr5);
    // vectorPrint(arr6);
    // arr5.clear();
    // vectorPrint(arr6);
    // cout<<arr5.size();
    // cout<<endl;
    // cout<<arr5.capacity();
    // cout<<endl;

    // arr5.pop_back();
    // vectorPrint(arr6);
    // cout<<arr5.size();
    // cout<<endl;
    // cout<<arr5.capacity();


    vector<int>c;
    int n;
    cout<<"Enter the number of elements that you want to enter : "<<endl;
    cin>>n;
    for(int i  = 0; i<n; i++){
        int element;
        cin>>element;
        c.push_back(element);
    }
    
    vectorPrint(c);
    c.clear();
    vectorPrint(c);
    cout<<c.size();
    cout<<endl;
    cout<<c.capacity();
}