#include<bits/stdc++.h>
using namespace std;

int find(int arr[],int n){
    int result=-1;
unordered_map<int,int>map;
for(int i=0;i<n;i++){
    map[arr[i]]++;
    if(map[arr[i]]>n/2){
        result=arr[i];
    }
}

return result;
}

int main(){
    
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<find(a,n);
}

// TC : O(N);
// SC : O(N) ; // using hashmap