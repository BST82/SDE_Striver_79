#include<bits/stdc++.h>
using namespace std;

void count_inversion(vector<int>&v){
   int count=0;
   for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){
        if(v[i]>v[j]){
            count++;
        }
    }
   }
   cout<<count;
}
int main(){
    cout<<"Enter size of array : ";
    int n,a;
    cin>>n;
    cout<<"Enter elements of array : ";
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }

    cout<<"Total count of inversions : ";
    count_inversion(v);
}

//TC = O(N^2)  because of two loops :(
//SP = O(N); Not using extra space 