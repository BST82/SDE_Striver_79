#include<bits/stdc++.h>
using namespace std ;

void sorten(vector<int>v1){
    int n=v1.size()-1;

    sort(v1.begin(),v1.end());

    for(int i=0;i<n;i++){
        if(v1[i]==v1[i+1]){
            cout<<v1[i];
        }
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
   sorten(v1);

}