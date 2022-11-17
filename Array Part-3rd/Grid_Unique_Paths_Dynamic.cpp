#include<bits/stdc++.h>
using namespace std;

class DpSolution{
 
 public :
 
     int countPaths(int i, int j, int n, int m,vector<vector<int>>&v){
         if(i==(n-1) && j==(m-1)) return 1;
         if(i>=n || j>=m ) return 0;
         if(v[i][j]!=-1) return v[i][j];
         else return v[i][j]=countPaths(i+1,j,n,m,v)+countPaths(i,j+1,n,m,v);

     }

     int uniquePath(int n, int m){
        vector<vector<int>>v(m+1,vector<int>(n+1,-1));
       int num= countPaths(0,0,m,n,v);

       if(m==1 && n==1) return num;
      return v[0][0];
     }
};
int main(){
       
       cout<<"Enter no. of rows & columns : ";
       int n,m;
       cin>>n>>m;
       DpSolution obj1;
       int totalCount= obj1.uniquePath(m,n);
       cout<<"Total unique paths : "<<totalCount;
}
// TC O(N*M);
//SC : O(N*M);