#include<bits/stdc++.h>
using namespace std;


vector<pair<int,int>>store(vector<pair<int,int>>&arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<pair<int,int>>result;

    for(int i=0;i<n;i++){
        int start=arr[i].first,end=arr[i].second;
        if (!result.empty()){
            if (start<=result.back().second) {
                continue;
            }
        }
        for (int j=i+1;j<n;j++) {
            if (arr[j].first<=end) {
                end=max(end,arr[j].second);
            }
        }
        end=max(end, arr[i].second);
        result.push_back({start, end});
    }

    return result;
}

int main(){
    vector< pair <int,int> > v; 
    cout<<"enter length of pair : ";
    int x,a,b;
    cin>>x;
    vector<int>v1;
    for(int i=0;i<x;i++){
     cin>>a;
     v1.push_back(a);
    }
    vector<int>v2;
    for(int i=0;i<x;i++){
     cin>>b;
     v2.push_back(b);
    }
    
  
    //Inserting value in vector pair
    for (int i=0; i<x; i++) 
        v.push_back( make_pair(v1[i],v2[i]) ); 
   vector < pair < int, int >> ans = store(v);

    cout << "Merged Overlapping Intervals are " << endl;

    // Printing the vector 
    for (auto it: ans) {
        cout << it.first << " " << it.second << "\n";
    }

}

//Time Complexity: O(NlogN)+O(N*N). O(NlogN) for sorting the array, and O(N*N) because we are checking to the right for each index which is a nested loop.

// Space Complexity: O(N), as we are using a separate data structure.
