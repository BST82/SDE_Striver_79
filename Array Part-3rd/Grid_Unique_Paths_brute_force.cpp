#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   int count_Paths(int i,int j,int n,int m){
     if(i==(n-1)&&j==(m-1)) return 1;
     if(i>n || j>m) return 0;
     else  return count_Paths(i+1,j,n,m)+count_Paths(i,j+1,n,m);
     }

     int unique_path(int n,int m){
        return count_Paths(0,0,n,m);
     }
};
int main()
{      cout<<"Enter size of first array1 and array2 : ";
    int n,m;
    cin>>n>>m;
    Solution abc;
    int totalCount= abc.unique_path(n,m);
    cout<<"The total number of Unique Paths are "<<totalCount<<endl;
}