
#include<bits/stdc++.h>
using namespace std;
void duplicateAndmissing(vector<int>&v){
    long long int n=v.size();
    vector<int>result;
    long long int s =(n*(n+1))/2;
    long long int ss=(n*(n+1)*(2*n+1))/6;

    long long int missing=0,duplicate=0;

    for(int i=0;i<n;i++){
        s-=(long long int)v[i];
        ss-=(long long int)v[i]*(long long int)v[i];
    }
    missing=(s+ss/s)/2;
    duplicate=missing-s;

    result.emplace_back(duplicate);
    result.emplace_back(missing);

    for(auto &i : result){
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
//Time complexity: O(N) 
//Space complexity: O(1)