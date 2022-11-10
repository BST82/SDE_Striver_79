


#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&v){
    int count=0;
    int result=0;

    for(auto &i: v){
        if(count==0){
        result=i;
        }
        if(i==result) count+=1;
            else count-=1;
    }

    return result;
}


int main(){
    
    int n,e;
    cout<<"Enter size of array : ";
    cin>>n;

    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>e;
        a.push_back(e);
    }

    cout<<find(a);
}


//Moore’s Voting Algorithm......
//TC: O(N)
// SC: O(1)