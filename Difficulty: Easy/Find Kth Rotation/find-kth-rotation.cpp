//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        int idx = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if((mid == 0 || (arr[mid]<arr[mid-1])) and (mid == n-1 || (arr[mid]<arr[mid+1]))){
                idx = mid;
                break;
            }
            if(arr[mid] > arr[hi]) lo = mid + 1;
            else hi = mid - 1;
        }
        return idx;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends