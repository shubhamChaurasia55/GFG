//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        int lo = 1;
        int hi = m;
        while(lo<=hi){
            int mid = lo + (hi - lo)/2;
            
            if((int)(pow(mid,n))==m){
                return mid;
            }
            else if((int)(pow(mid,n))<m) lo = mid+1;
            else hi = mid - 1;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends