#include<bits/stdc++.h>
using namespace std;

class CombinationSolution{
   public: 

   int countPaths(int n,int m){
    int N=(n+m)-2;
    int r= m-1;
    double res= 1;

    for(int i=1;i<=r;i++){
        res=res *(N-r+i)/i;
    }
   return res;
   }
};

int main(){
    cout<<"Enter no. of rows & columns : ";
    int n,m;
    cin>>n>>m;
    CombinationSolution obj1;
    int totalPath=obj1.countPaths(n,m);
    cout<<"Total count of paths : "<<totalPath;
}
//TC:O(n-1) or  O(m-1)

//SC:O(1).