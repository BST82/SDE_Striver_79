#include<bits/stdc++.h>
using namespace std;

// Dutch National flag algorithm [or] 3-Pointer approach

void sortDouch_3pointer(vector<int>&A){
      int low=0,mid=0,high=A.size()-1;

      while(mid<=high){

        switch (A.at(mid))
        {
        case 0:
            swap(A[low],A[mid]);
            low++;mid++;
            break;
        
         case 1:
            mid++;
            break;

         case 2:
            swap(A[mid],A[high]);
            high--;
            break;

        }
      }
}

void output(vector<int>&A){
    for(auto &i:A){
        cout<<i<<" ";
    }
}
int main(){
    int n,a;
    cout<<"Enter no of vector element : ";
    cin>>n;

    vector<int>v;
    cout<<"Enter vector element : ";
    for(int i=0;i<n;i++){
        cin>>a;
        v.emplace_back(a);
    }

sortDouch_3pointer(v);
 cout<<"Sorted vector element : ";
output(v);

}