#include<bits/stdc++.h>
using namespace std;

void merge(int a1[], int a2[], int n, int m) {
    int a3[n+m];
    int k = 0;
    for (int i = 0; i < n; i++) {
      a3[k++] = a1[i];
    }
    for (int i = 0; i < m; i++) {
      a3[k++] = a2[i];
    }
    sort(a3,a3+m+n);
    k = 0;
    for (int i = 0; i < n; i++) {
      a1[i] = a3[k++];
    }
    for (int i = 0; i < m; i++) {
      a2[i] = a3[k++];
    }

  }
int main(){
    cout<<"Enter size of first array1 and array2 : ";
    int n,m;
    cin>>n>>m;
    int a1[n], a2[m];
    cout<<"Enter elements of array1 and array2 : ";
    
   
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
   cout<<endl;
   merge(a1,a2,n,m);
  cout << "After merge:" << endl;
  for (int i = 0; i < n; i++) {
    cout << a1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < m; i++) {
    cout << a2[i] << " ";
  }
}