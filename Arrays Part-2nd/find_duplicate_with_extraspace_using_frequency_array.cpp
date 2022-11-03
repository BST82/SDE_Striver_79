#include<bits/stdc++.h>
using namespace std;

void sort_using_FrequencyArray_Extraspace(vector<int>&v){
    int n=v.size();
    int freArr[n+1]={0}; //initialize with 0 for every array elements 

    for(int i=0;i<n;i++){
        if(freArr[v[i]]==0){
            freArr[v[i]]+=1;
        }
        else{
           cout<< v[i];
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
cout<<"Duplicate element is : ";
sort_using_FrequencyArray_Extraspace(v1);
}

//Time Complexity: O(N) traversing array only once. :)

//Space Complexity: O(N)using extra_space frequency array :(