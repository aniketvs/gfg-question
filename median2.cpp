#include<bits/stdc++.h>
using namespace std;
int main(){
   int a[]={-5, 3, 6, 12, 15};
   int b[]={-12, -10, -6, -3, 4, 10};
  
   int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int c=(n+m)/2;
    int d[c];
 int l=0,r=0;
 int p=0;
 while (l<=c && r<=c)
 {
     if(a[l]>b[r]){
d[p]=b[r];
r++;
     }
     else{
         d[p]=a[l];
         l++;
     }
     
     p++;
 }
 if((n+m)%2==0){
     cout<<(d[c]+d[c-1])/2;
 }else{
     cout<<d[c];
 }
}