
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int low=0;
      if(!matrix.size()) return false;
      int high=(matrix.size()*matrix[0].size())-1;

      while (low<=high)
      {
        int mid=(low +(high-low)/2);
        if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]==target){
            return true;
        }
        if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]<target){
            low=mid+1;
        }else{
        high=mid-1;
        }
      }
      return false;
        }   
int main(){
    int row;
    int col;

    // Input rows & columns
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    // Declaring 2D vector "v1" with
    // given number of rows and columns
    // and initialized with 0
    vector<vector<int> > v1(row, vector<int>(col, 0));

    // Input vector's elements
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v1[i].size(); j++) {
            cout << "Enter element: ";
            cin >> v1[i][j];
        }
    }
    cout<<"Enter element you want to search : ";
int target;
cin>>target;
   cout<< searchMatrix(v1,target);
// cout<<"\n";
    // Printing the 2D vector's elements
    // cout << "2D vector elements..." ;
    // for (int i = 0; i < v1.size(); i++) {
    //     for (int j = 0; j < v1[i].size(); j++)
    //         cout << v1[i][j] << " ";
    //     cout << endl;
    // }
    return 0;
}

// TC : O(log(m*n));
//SC : O(1);