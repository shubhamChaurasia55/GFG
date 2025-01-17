//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        // for first occurance
        bool flag = false;
        int lo = 0;
        int hi = n-1;
        int fo = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid] == target){
                if(mid==0 or arr[mid-1] != target){
                    flag = true;
                    fo = mid;
                    break;
                }
                else hi = mid - 1;
            }
            else if(arr[mid]<target) lo = mid + 1;
            else hi = mid - 1;
        }
        // for last occurance
        lo = 0;
        hi = n-1;
        int lao = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid] == target){
                if(mid == n-1 or arr[mid+1] != target){
                    lao = mid;
                    break;
                }
                else lo = mid + 1;
            }
            else if(arr[mid]<target) lo = mid + 1;
            else hi = mid - 1;
        }
        if(flag) return lao - fo + 1;
        else return 0;
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends