#include<bits/stdc++.h>
using namespace std;
int main(){int m,n;
    cin>>m>>n;
    int a[m][n];
    for (int i = 0; i <m; i++)
    {for (int j = 0; j < n; j++)
    {
      cin>>a[i][j];
    }
    
    }
    unordered_map <int,int> mp;
    int ar[1000]={0};
     for (int i = 0; i < m; i++)
     {
         for (int j = 0; j< n; j++)
         {
             mp[a[i][j]]++;
         }
          unordered_map<int,int>::iterator it;
          for (it = mp.begin(); it != mp.end(); it++)
          {
              if(it->second>1){
                  it->second=1;

              }
              ar[it->first]+=it->second;
              
          }
           for (it = mp.begin(); it != mp.end(); it++)
          {it->second=0;
              
          }
          
          
         

         
     }
     
     for (int i = 0; i <1000; i++)
     {
         if(ar[i]==m){
             cout<<i<<endl;
         }
     }
     
    
}