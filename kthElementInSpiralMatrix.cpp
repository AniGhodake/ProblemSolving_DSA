#include <iostream>
#include<vector>
using namespace std;
#define MAX 3

class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
        vector<int>nums;
 		int firstRow = 0;
 		int lastRow = n -1;
 		int firstCol = 0;
 		int lastCol = m -1;
 		int count = 0;
 		int totalCount = m*n;
 		int element;
 		int ans = -1;
 		
 		
 		while(count<k){
 		    // first Row
 		    for(int i =firstCol; i <= lastCol && count< totalCount; i++ ){
 		        element = a[firstRow][i];
 		        count++;
 		        nums.push_back(element);
 		    }
 		    firstRow++;
 		    
 		      // last Col
 		    for(int i =firstRow; i <= lastRow && count < totalCount; i++){
 		        element = a[i][lastCol];
 		        count++;
 		        nums.push_back(element);
 		    }
 		    lastCol--;
 		    
 		      //last Row
 		      for(int i = lastCol; i >= firstCol && count < totalCount; i--){
 		          element = a[lastRow][i];
 		          count++;
 		          nums.push_back(element);
 		      }
 		      lastRow--;
 		      
 		      //first Col
 		      for(int i = lastRow; i >= firstRow && count < totalCount; i--){
 		          element = a[i][firstCol];
 		          count++;
 		          nums.push_back(element);
 		      }
 		      firstCol++;
 		      
 		}
 		
 		for(int i = 0; i < nums.size(); i++){
 		    if(i==k-1){
 		        ans = nums[i];
 		    }
 		       
 		}
 		return ans;
    }
};

int main(){
     int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<"element at spiral position "<<k<<" is "<<ob.findK(a,n,m,k)<<endl;
}