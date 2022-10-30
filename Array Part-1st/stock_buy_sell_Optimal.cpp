#include<bits/stdc++.h>
using namespace std;


void output(vector<int>&A){
    for(auto &i:A){
        cout<<i<<" ";
    }
}

void stock(vector<int>&v){
   int n=v.size()-1, maxprofit=0, minprice=INT_MAX;

   for(int i=0;i<n;i++){
    minprice=min(minprice,v[i]);
    maxprofit=max(maxprofit,v[i]-minprice);
   }
   cout<<maxprofit;

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
 


stock(v);


}