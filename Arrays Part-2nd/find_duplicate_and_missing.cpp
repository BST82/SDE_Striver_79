
#include<bits/stdc++.h>
using namespace std;
void duplicateAndmissing(vector<int>&v){
    int n=v.size();
    vector<int>sustitute_Array(n+1,0);

    vector<int>ans;

    for(int i=0;i<n;i++){
        sustitute_Array[v[i]]++;
    }

    for(int i=1;i<=n;i++){
        if(sustitute_Array[i]==0 || sustitute_Array[i]>1)
        ans.push_back(i);
    }
  
    for(auto &i: ans){
     cout<<i<<" ";
    } 
    
}
   
int main(){
    cout<<"Enter size of array : ";
    int n,a;
    cin>>n;
    cout<<"Enter elements of array : ";
    vector<int>v1;
    for(int i=0;i<n;i++){
        cin>>a;
        v1.push_back(a);
    }
     cout<<"Duplicate element : ";
   cout<<"{ "; 
   duplicateAndmissing(v1);
   cout<<"}";


}
//Time complexity: O(N) traversed array only once.
//Space complexity: O(1)