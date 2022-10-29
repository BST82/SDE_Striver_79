#include<bits/stdc++.h>
using namespace std;

// 2nd method of sorting using counting of 0's , 1's,2's
void sort_0_1_2_array( vector<int>&A, int n )    
{  
    int i =0, countzero=0,countone=0,  counttwo=0 ;  
    while ( i<n )  
    {  
        if (A.at(i)== 0 )  
        {  
            countzero+=1 ;  
        }  
        else if ( A[i]== 1 )  
        {  
            countone=countone+1 ;  
        }  
        else  
        {  
            counttwo=counttwo+2;  
        }  
        i=i+1 ;  
    }  
    for  ( i=0;i<countzero;i++ )  
    {  
        A.at(i)= 0 ;  
    }  
    for ( i=countzero;i<countzero +countone ; i++ )  
    {  
        A [i]=1 ;  
    }  
    for ( i=countzero+countone;i<n;i++ )  
    {  
        A.at(i)= 2 ;  
    }  
}  
int main()  
{  
    int i , n,a;
    cout<<"enter length of vector : ";
    cin>>n;
    vector<int>v;
    printf  ( " Enter element to be sorted : " ) ;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }  
   
    cout<<"Array after sorting : " ;  
    sort_0_1_2_array( v,n ) ;  
    for (auto &i: v )  
    {  
        cout<<v.at(i)<<" "; 
    }  
      
}  