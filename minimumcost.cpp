#include<bits/stdc++.h>
using namespace std;

int minimum(int a[],int b[],int n){
unordered_map<int,int> m;
int s[n];
int e[n];int z[n];
int ks=0;
for (int  i = 0; i < n; i++)
{
   if(a[i]==b[i]){
      e[i]=a[i];
      z[i]=a[i];
      s[ks]=i;
      ks++;
   }else{
       e[i]=0;
       z[i]=0;
   }
}


int f;int kc=0;int k=0 ;int js;
int sum=0;
int h=0;

int x=0;

for (int i = n-1; i >=0; i--)
{if(n%2!=0 && i>n/2 ){
   if(e[i] != e[i-1] && k>=0  ){
        js=i;
          while (k>=0 && e[i]!=0 )
          { if(e[i]!=e[s[h]]){
              swap(e[i],e[s[h]]);
          
             sum+=i+s[h]+2;
           
             k--;
             h++;
            i++;}
            else{
            
                if (e[i]==e[s[h]])
                {h++;
                    swap(e[i],e[s[h]]);
           
             sum+=i+s[h]+2;
           
             k--;
             h--;
            i++;
                }
                
            }
         
            
          }k=0;
          i=js;
          
    }
    else if(e[i]==e[i-1] && e[i]!=0 && e[i-1]!=0){
        k++;
    }
    
}
    
}
if(n%2!=0){
swap(e[n/2],e[0]);

sum+=n/2+2;}
for (int i = n-1; i >=0; i--)
{if(n%2==0){
   if(e[i] != e[i-1] && k>=0  ){
        js=i;
          while (k>=0 && e[i]!=0 )
          {if(e[i]!=e[s[h]]){
              swap(e[i],e[s[h]]);
          
             sum+=i+s[h]+2;
           
             k--;
             h++;
            i++;}
          
            else{
            
                if (e[i]==e[s[h]])
                {h++;
                    swap(e[i],e[s[h]]);
           
             sum+=i+s[h]+2;
           
             k--;
             h--;
            i++;
                }
          }k=0;
          i=js;
          
    }}
    else if(e[i]==e[i-1] && e[i]!=0 && e[i-1]!=0){
        k++;
    }
    
}
    
}

for (int i = 0; i < n; i++)
{
   cout<<e[i]<<" ";
}

return sum;


}
int main(){
    int n;
    cout<<"please neter array size";
    cin>>n;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
      for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    cout<<minimum(a,b,n);
}