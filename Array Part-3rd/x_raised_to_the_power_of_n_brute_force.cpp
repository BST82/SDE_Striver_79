#include<bits/stdc++.h>
using namespace std;
double powerof(double x, int n){
double p=1;

    for(int i=1;i<=n;i++){
        p*=x;
    }
    return p;
}
int main(){
    double x;
    int n;
    cin>>x>>n;
    cout<<powerof(x,n);
}

//TC: O(N)

//SC: O(1)