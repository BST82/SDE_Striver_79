#include<bits/stdc++.h>
using namespace std;

double power(double x, int n){
    double result=1.0;
    long long k=n;

    if(k<0){
        k=(-1*k);
    }
    while(k){
    if(k%2){
        result*=x;
        k-=1;
    }else{
        x*=x;
        k/=2;
    }
    }
    if(n<0){
        result=(double)(1.0)/(double)(result);     
    }

    return result;

}
int main(){
    cout<<"Enter value of x : ";
double x; int n;
cin>>x;
cout<<"Enter value of n : ";
cin>>n;
cout<<x<<" raised to the power "<<n<<" is : ";
cout <<power(x,n) << endl;
}