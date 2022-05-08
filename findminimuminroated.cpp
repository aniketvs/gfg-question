#include<bits/stdc++.h>
using namespace std;
int findmin(int a[],int l,int h){
    if(h<l){
        return a[0];
    }
    if(h==l){
        return a[l];
    }
    int mid=l+(l+h)/2;
    if(mid<h && a[mid+1]<a[mid]){
        return a[mid+1];
    }
    if(mid>l && a[mid-1]>a[mid]){
        return a[mid];
    }
    if(a[h]>a[mid]){
        return findmin(a,l,mid-1);
    }
    else{
        return findmin(a,mid+1,h);
    }
    }

int main()
{
    int a[]={11,3,4,};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<findmin(a,0,n-1);
    
}