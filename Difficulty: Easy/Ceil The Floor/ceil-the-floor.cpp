//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        vector<int> ans(2,-1);
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]==x){
                ans[0] = arr[mid];
                ans[1] = arr[mid];
                return ans;
            }
            else if(arr[mid]<x) lo = mid + 1;
            else hi = mid - 1;
        }
        ans[0] = arr[hi];
        ans[1] = arr[lo];
        if(arr[0]>x) ans[0] = -1;
        if(arr[n-1]<x) ans[1] = -1;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends