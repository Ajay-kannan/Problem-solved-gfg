//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
      int z=0,o=0,t=n-1,count=0,temp=0;
        while(o <= t)
        {
           if(a[o] == 0)
            {
                
                swap(a[o],a[z]);
                z++;o++;
                
            }
            else if(a[o] == 2)
            {
                swap(a[o],a[t]);
                t--;
            }
           
            else
            o++;
            
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends