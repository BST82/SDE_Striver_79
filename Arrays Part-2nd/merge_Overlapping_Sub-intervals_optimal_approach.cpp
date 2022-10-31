#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>merge(vector<vector<int>>&v1){

    // 1st sort every pairs
    sort(v1.begin(),v1.end());
    // create another storage after mergin 
    vector<vector<int>>store;

    for(int i=0;i<v1.size();i++){
        if(store.empty() || store.back()[1]<v1[i][0]){
        vector<int>v3={v1[i][0],v1[i][1] };

        store.push_back(v3);
    }else{
        store.back()[1]= max(store.back()[1],v1[i][1]);
    }
    }

    return store;
}
int main(){
    vector<vector<int>>v1;
    v1={{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};

    vector<vector<int>>v2=merge(v1);
    cout<<"Result "<<endl;

    for(auto it:v2){
        cout<<it[0]<<" "<<it[1]<<"\n";
    }
}

// tc: O(NlogN) + O(N). O(NlogN) for sorting and O(N) for traversing through the array.

//sc: O(N) to return the answer of the merged intervals.