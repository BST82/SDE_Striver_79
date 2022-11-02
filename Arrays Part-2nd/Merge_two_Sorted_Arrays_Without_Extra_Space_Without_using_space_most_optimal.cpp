#include<bits/stdc++.h>
using namespace std;

void merge(int a1[],int a2[],int n,int m){
  int gap = ceil((float)(n + m) / 2);
  while (gap > 0) {
    int i = 0;
    int j = gap;
    while (j < (n + m)) {
      if (j < n && a1[i] > a1[j]) {
        swap(a1[i], a1[j]);
      } else if (j >= n && i < n && a1[i] > a2[j - n]) {
        swap(a1[i], a2[j - n]);
      } else if (j >= n && i >= n && a2[i - n] > a2[j - n]) {
        swap(a2[i - n], a2[j - n]);
      }
      j++;
      i++;
    }
    if (gap == 1) {
      gap = 0;
    } else {
      gap = ceil((float) gap / 2);
    }
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
