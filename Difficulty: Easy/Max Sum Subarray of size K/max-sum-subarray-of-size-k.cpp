//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int lo = 0;
        int hi = k-1;
        int mx = 0;
        for(int i=0;i<k;i++) mx += arr[i];
        int sum = mx;
        while(hi<n-1){
            mx = max(mx,sum);
            sum -= arr[lo];
            lo++; hi++;
            sum += arr[hi];
        }
        mx = max(mx,sum);
        return mx;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends