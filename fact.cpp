// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++


 
    vector<long long> factorial(int n){
        // code here
        
      
      
      vector<long long> v;
      long long c=1;
      
       for(int i=1;i<=n;i++){
         c*=i;
         v.push_back(c);
    
         
       }
       
    
      

       return v;
    }

// { Driver Code Starts.

int main() {
   
   long long N;
        cin >> N;
     
        vector<long long> result = factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
