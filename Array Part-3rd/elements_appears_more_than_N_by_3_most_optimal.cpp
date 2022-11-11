
#include<bits/stdc++.h>
using namespace std;

vector<int>find(int arr[],int num){
int n1{-1},n2{-1},c1{0},c2{0},i;
int n=num;
for(i=0;i<n;i++){
    if(arr[i]==n1){ c1++;}
    else if(arr[i]==n2){ c2++;}
    else if(c1==0){ n1=arr[i];  c1=1;}
    else if(c2==0){ n2=arr[i];  c2=1;}
    else{  c1--;c2--;}
}

vector<int>res;
c1=c2=0;
for( i=0;i<n;i++){
    if(arr[i]==n1) c1++;
    else if(arr[i]==n2) c2++;
}

if(c1>n/3) res.push_back(n1);
if(c2>n/3) res.push_back(n2);

return res;
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
  
  for (auto it: majority) {
    cout << it << " ";
  }
}





//TC: O(n)
//SC: O(1)
//elements_appears_more_than_N_by_3_better_method.cpp