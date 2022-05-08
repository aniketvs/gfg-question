// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
   
     int commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            //code here.
               unordered_map<int,int> m;
            for(int i=0;i<n1;i++){
               
                    /* code */
                      m[a[i]]++;
                
                
        
            }
            for(int i=0;i<n2;i++){
               if (m[b[i]]==1)
                {
                    /* code */
                      m[b[i]]++;
                }
            }
            for(int i=0;i<n3;i++){
               if (m[c[i]]==2)
                {
                    /* code */
                      m[c[i]]++;
                }
            }
            unordered_map<int,int>::iterator it;
            int count =0;
            vector<int> v;
            int k;
          for(it=m.begin();it!=m.end();it++){
              if(it->second==3){
                  k=it->first;
                v.push_back(k);
              }
          }
          sort(v.begin(),v.end());
          cout<<endl;
          for(auto i:v){
              cout<<i<<endl;
          }
            
        }

// { Driver Code Starts.

int main ()
{
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        commonElements(A,B,C,n1,n2,n3);
        
    }
// } Driver Code Ends