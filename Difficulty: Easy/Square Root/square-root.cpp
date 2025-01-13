//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int lo = 1;
        int hi = n;
        bool flag = false;
        while(lo<=hi){
            long long mid = lo + (hi-lo)/2;
            
            if(mid*mid == n) return mid;
            else if(mid*mid < n) lo = mid+1;
            else hi = mid - 1;
        }
        return hi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends