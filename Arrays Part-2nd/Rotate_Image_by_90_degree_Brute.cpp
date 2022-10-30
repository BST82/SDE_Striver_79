#include<bits/stdtr1c++.h>
using namespace std;


// input for 2D vector 
void input(vector<vector<int>>&v){
     int n,m;
      cin>>n>>m;
int val;
for(int i = 0; i < n; i++){
    vector<int> temp;
    for(int j = 0; j < n; j++){
        cin >> val;
        temp.push_back(val);
    }
    v.push_back(temp);
    temp.clear();
}

}
// Brute force method to solve Rotate Image by 90 degree

vector<vector<int>>rotate_90(vector<vector<int>>&v){
 int n=v.size();
 vector<vector<int>>rotate_90(n,vector<int>(n,0));
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        rotate_90[j][n-i-1]=v[i][j];
    }
 }
 return rotate_90;
}

// output for 2D vector 
void output(vector<vector<int>>&v){
     vector < vector < int >> rotated = rotate_90(v);
  cout << "After rotation of 90 degree " << endl;
  for (int i = 0; i < rotated.size(); i++) {
    for (int j = 0; j < rotated[0].size(); j++) {
      cout << rotated[i][j] << " ";
    }
    cout << "\n";
  }
}


int main(){
   
    cout<<"Enter same size of row and columns : ";
    vector<vector<int>>v;
    input(v);
    cout<<endl;
    output(v);

     
}

// Time Complexity: O(N*N) ;
// Space Complexity: O(N*N) because of using extra matrix;