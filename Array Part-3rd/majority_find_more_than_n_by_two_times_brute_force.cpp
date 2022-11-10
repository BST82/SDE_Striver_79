#include<bits/stdc++.h>
using namespace std;

void find(int arr[],int n){
    int maxcount=0;
    int index=-1;

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
                count++;
      }
        if(count>maxcount){
                maxcount=count;
                index=i;
            }
    }
    if(maxcount>(n/2)){
        cout<<arr[index]<<endl;
    }else{
        cout<<"NA";
    }
}
 

int main(){
    
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    find(a,n);
}