//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        int np = pat.size();
        vector<int> v1(26,0);
        for(int i=0;i<np;i++) v1[pat[i]-'a']++;
        vector<int> v2(26,0);
        for(int i=0;i<np;i++) v2[txt[i]-'a']++;
        int lo = 0;
        int hi = np-1;
        int count= 0;
        while(hi<txt.size()-1){
            if(v1==v2) count++;
            v2[txt[lo]-'a']--;
            lo++;hi++;
            v2[txt[hi]-'a']++;
        }
        if (v1 == v2) count++;
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends