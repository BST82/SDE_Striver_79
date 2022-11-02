#include<bits/stdc++.h>
using namespace std;

void merge(int a1[],int a2[],int n, int m){

int j;
for(int i=0;i<n;i++){
    if(a1[i]>a2[0]){
        int temp=a1[i];
        a1[i]=a2[0];
        a2[0]=temp;
    }
    int a2_element=a2[0];
   for(j=1;j<m && j<a2_element;j++){
    a2[j-1]=a2[j];
   }
   a2[j-1]=a2_element;
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

//Time complexity: O(n*m)

// Space Complexity: O(1) 