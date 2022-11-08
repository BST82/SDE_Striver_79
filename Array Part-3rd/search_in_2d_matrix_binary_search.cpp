#include<bits/stdc++.h>
using namespace std;

vector<int>searchMatrix(vector<vector<int>> matrix, int target) {
        int row=0;
        int col=matrix[row].size()-1;

        while(row<matrix.size() && col>=0){
            if(matrix[row][col]==target);{
                return {true};
            }
            if(matrix[row][col]<target){
                row++;
            }else{
                col--;
            }
        }

        return {false};
        }   
int main(){
     vector<vector<int> > arr = { { 1, 2, 3, 4 },
                                 { 5, 6, 7, 8 },
                                 { 9, 10, 11, 12 } };
 
    vector<int> ans = searchMatrix(arr, 12);
 
   
    for (int i = 0; i < ans.size(); i++) {
        if (i == ans.size() - 1)
            cout << ans[i];
        else
            cout << ans[i] << ", ";
    }
    
}

// TC : O(N+M);
//SC : O(1);