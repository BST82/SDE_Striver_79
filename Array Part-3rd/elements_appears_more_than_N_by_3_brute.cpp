#include<bits/stdc++.h>
using namespace std;

vector<int>find(int arr[],int n){

    int maxc=0;
    vector<int>s;

    for(int i=0;i<n;i++){
       int count=1;
       for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;     
        }
       }
       if(count>n/3){
        s.push_back(arr[i]); 
       }
    }
    return s;
   
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   vector<int>majority=find(arr,n);
   cout << "The majority element is : ";
  set<int>s(majority.begin(), majority.end());
  for (auto it: s) {
    cout << it << " ";
  }
}

//TC: O(N*N)

//SC: O(1)