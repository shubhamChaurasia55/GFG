//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        int n = arr.size();
        int lo = 0;
        int hi = k-1;
        int n_idx = 0;
        vector<int> v;
        while(hi<n){
            while(n_idx<n){
                if(arr[n_idx]<0) break;
                else n_idx++;
            }
            
            if(n_idx<=hi and n_idx>=lo) v.push_back(arr[n_idx]);
            else v.push_back(0);
            
            hi++;lo++;
            if(n_idx<lo) n_idx = lo;
        }
        return v;
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
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends