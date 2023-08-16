//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        sort(a,a+size); 
        if(size==1) return a[0];
        int m=0,in=0;
        int cnt=0; 
        for(int i=0;i<size;i++)
        {
            if(a[i]==a[i+1])
            cnt++;
            if(m<cnt)
            {
                m=cnt;
                in=a[i];
            }
            if(a[i]!=a[i+1])
            cnt=0;
        } 
        if(m>=size/2)
        return in;
        else 
        return -1;
        
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends
