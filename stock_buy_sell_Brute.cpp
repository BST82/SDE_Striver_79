#include<bits/stdc++.h>
using namespace std;


void output(vector<int>&A){
    for(auto &i:A){
        cout<<i<<" ";
    }
}
int maxpro=0;
void stock(vector<int>&v){
    int n= v.size()-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[j]>v[i]){
                maxpro=max(v[j]-v[i],maxpro);
            }
        }
    }
    cout<<maxpro;
}
int main(){
    int n,a;
    cout<<"Enter no of vector element : ";
    cin>>n;

    vector<int>v;
    cout<<"Enter vector element : ";
    for(int i=0;i<n;i++){
        cin>>a;
        v.emplace_back(a);
    }
 
cout<<endl;

stock(v);


}