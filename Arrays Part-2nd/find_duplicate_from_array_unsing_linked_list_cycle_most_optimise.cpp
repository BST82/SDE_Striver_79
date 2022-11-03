
#include<bits/stdc++.h>
using namespace std;
void duplicate(vector<int>&v){
    int slow=v[0];
    int fast=v[0];
    do{
      slow=v[slow];
      fast=v[v[fast]];
    }while(slow!=fast);

    fast=v[0]; // fast reaches at 0th position

    while(slow!=fast){
        slow=v[slow];
        fast=v[fast];
    }
    cout<<slow;
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
    duplicate(v1);
}
//Time complexity: O(N) traversed array only once.
//Space complexity: O(1)