#include<bits/stdc++.h>
using namespace std;

vector<int>find(int arr[],int n){
unordered_map<int,int>map;

vector<int>result;
for(int i=0;i<n;i++){
map[arr[i]]++;
}

for(auto &i: map){
if(i.second>n/3){
result.push_back(i.first);
}
}
return result;

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
//TC : O(N)
// SC : O(N)