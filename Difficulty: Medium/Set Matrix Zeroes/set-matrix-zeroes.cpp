//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
       int rows = mat.size();
        int cols = mat[0].size();
        // method 3
        bool flag = 0;
        
        for(int i = 0; i<rows;i++){
            if(mat[i][0] == 0) flag =1;
            for(int j=1;j<cols;j++){
                // store row and column of every 0 value
                if(mat[i][j] == 0){
                    mat[i][0] = mat[0][j] =0;
                }
            }
        }
        // replace row and column to 0
        for(int i=rows-1;i>=0;i--){
            for(int j = cols-1;j>0;j--){
                if(mat[i][0] ==0 or mat[0][j] ==0) mat[i][j]=0;
            }
            if(flag){
                mat[i][0]=0;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends