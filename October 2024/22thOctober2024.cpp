//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int sameOccurrence(vector<int>& a, int x, int y) {
        int n=a.size();
        
        for(int i=0;i<n;i++){
            if(a[i]==x) a[i]=1;
            else if(a[i]==y) a[i]=-1;
            else a[i]=0;
        }
        
        int s=0,c=0;
        unordered_map<int,int> m;
        
        m[0]++;
        
        for(int i=0;i<n;i++){
            s=s+a[i];
            if(m.find(s)!=m.end()) c=c+m[s];
            m[s]++;
        }
        
        return c;
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
        int x = stoi(ks);
        string ks1;
        getline(cin, ks1);
        int y = stoi(ks1);
        Solution ob;
        int ans = ob.sameOccurrence(arr, x, y);
        cout << ans << "\n";
        // cout<<"~"<<endl;
    }
    return 0;
}
// } Driver Code Ends
