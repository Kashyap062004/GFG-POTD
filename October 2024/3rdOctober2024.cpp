//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& a) {
        int n=a.size();
        map<int,int> m;
        set<int> s;
        for(int i=0;i<n;i++) m[a[i]]++;
        for(i:m){
            if(i.second > n/3) s.insert(i.first);
        }
        if(s.size()==0) return {-1};
        vector<int> v;
        for(i:s) v.push_back(i);
        
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends