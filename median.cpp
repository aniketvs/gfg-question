#include<bits/stdc++.h>
using namespace std;
int main(){
int a[]={-5,3,6,12,15};
int n=sizeof(a)/sizeof(a[0]);
int b[]={-12,-10,-6,-3,4,10};
int k=sizeof(b)/sizeof(b[0]);
map<int,int> m;
for(int i=0;i<n;i++){
   m[a[i]]++;
}
for (int i = 0; i < k; i++)
{m[b[i]]++;
}
int c[n+k];
map<int,int> ::iterator it;
int j=0;
for ( it = m.begin(); it != m.end(); it++)
{
    c[j]=it->first;
    if(it->second>1){
        int l=it->second+j;
      int i;
        for (int i = j+1; i <l; i++)
        {
            c[i]=c[j];
        }
     j=i;
    }
    j++;
}
if((n+k)%2==0){
    cout<<(c[(n+k)/2]+c[(n+k)/2-1])/2;
}
else{
    cout<<c[(n+k)/2];
}
}