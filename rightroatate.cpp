#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    int k=3;
    int t=n-k;
    int j[n];
    int l=0;
    for (int i = t; i < n; i++)
    {
        j[l]=a[i];
        l++;

    }
    for (int i = 0; i < t; i++)
    {
      j[l]=a[i];
      l++;
    }
    for (int i = 0; i < n; i++)
    {a[i]=j[i];
    cout<<a[i];
    }
    
    
    
}