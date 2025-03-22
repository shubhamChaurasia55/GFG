//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
public:
    void solve(string temp, vector<string>&ans, int &n){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        solve(temp+'0',ans,n);
        if(temp.size()==0 || temp[temp.size()-1] == '0')
            solve(temp+'1',ans,n);
    }
    vector<string> generateBinaryStrings(int num){
        vector<string> ans;
        solve("",ans,num);
        return ans;
    }
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends