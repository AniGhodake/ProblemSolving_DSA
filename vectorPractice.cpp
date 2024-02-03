#include<iostrem>
#include<vector>
using namespace std;

void print (vector<int>v){
    cout <<"Printing Vector : "<<endl;
    int size  = v.size();
    for(int i = 0; i<size; i++){
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

void print2(vector<int> v){
    cout << "Printing vector method 2 : "<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout << endl;
}

int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    print(v);
    print2(v);
    vector<char> v ;
    v.push_back('a');
     vector<char> v ;
    v.push_back('a');
      vector<char> v ;
    v.push_back('a');


    v.push_back('b');
    

}

