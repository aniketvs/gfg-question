#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;cin>>m; 
    int a[n],b[m];
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int l=0,j=0;int k=0;
        if(n>m){
          while(l<m){

              cout<<l<<"  -b[l]="<<b[l]<<endl;
             cout<<j<<"  -a[j]="<<a[j]<<endl;
              if(b[l]==a[j]){
                  k++;
                  j=0;
                  l++;
                  
              }
              else if(j<n){
                  j++;
              }else{
                  l++;
              }
          }
        }else{cout<<"let start"<<endl;
        int p=0;
              while(l<n){
                  
                  
              if(a[l]==b[p]){
                  k++;
                  p=0;
                  l++;
                  
              }
              else if(p<m){
                  p++;
              }else{
                  l++;
              }
          }
        }
      cout<<endl;
      int sum=n-k+m;
      cout<<sum<<n<<"-"<<k<<"+"<<m<<endl;
    
}