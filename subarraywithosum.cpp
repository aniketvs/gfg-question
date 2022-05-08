// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int a[], int n)
    {
        int c=0,y=-1;
        bool x=false;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                x=true;
            }y++;
            c+=a[i];

             if(c==0){
                x=true;
                break;
                
            }
         
            if(i==n-1){
                i=(n-1)-y;
                c=0;
                y=-1;
            }
           
        }
        return x;
    
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  // } Driver Code Ends