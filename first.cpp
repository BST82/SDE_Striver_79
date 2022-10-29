#include<bits/stdc++.h>
using namespace std;

// for output
void output(vector<int>&v){
for(auto &i:v){
    cout<<i<<" ";
}
}

// for input
void input(vector<int>&v, int n){
int a;
for(int i=0;i<n;i++){
    cin>>a;
    v.emplace_back(a);
    
}
}

// for sorting 
void sorting(vector<int>&v){
    sort(v.begin(),v.end());
}

int main() {
int n;
cout<<"enter size of vector : ";
cin>>n;
vector<int>v;
cout<<"Enter elements you want to sort : ";
input(v,n);

cout<<"Before sorting : ";
output(v);
sorting(v);

cout<<endl;

cout<<"After sorting : ";
output(v);
cout<<endl;

}