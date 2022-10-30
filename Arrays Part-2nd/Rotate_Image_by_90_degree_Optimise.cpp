#include<bits/stdc++.h>
using namespace std;

// user input 
void input(vector<vector<int>>&v){
    int n,m;
    cin>>n>>m;
    int value;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
        cin>>value;
        temp.push_back(value);
        }
        v.push_back(temp);
        temp.clear();
    }
}
// rotate matrix using tranpose method for optimal solution

void rotate(vector<vector<int>>&v){
    int n=v.size();

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    // after swap you have to reverse rows 

    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
}
// output for 2d vector 
void output(vector<vector<int>>&v){
 cout<<"Ater 90 degree rotation "<<endl;
 for(int i=0;i<v.size();i++){
    for(int j=0;j<v[0].size();j++){
        cout<<v[i][j]<<" ";
    } 
    cout<<"\n";
 }
}

int main(){
  vector<vector<int>>v;
  cout<<"Enter size of rows and columns ";
  input(v);
  rotate(v);
  cout<<endl;
  output(v);
}

//Time Complexity: O(N*N) + O(N*N).One O(N*N) for transposing the matrix and the other for reversing the matrix
//Space Complexity: O(1) not using any extra space :)
