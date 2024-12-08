//Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

//Driver Code Ends

class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& a) {
        // Code here
        vector<vector<int>> v;
        sort(a.begin(),a.end());
        v.push_back(a[0]);
        for(int i=1;i<a.size();i++){
            if(v.back()[1] >= a[i][0]) v.back()[1]=max(v.back()[1],a[i][1]);
            else  v.push_back(a[i]);
        }
        return v;
    }
};

//Driver Code Starts

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            arr[i].push_back(x);
            arr[i].push_back(y);
        }
        Solution obj;
        vector<vector<int>> ans = obj.mergeOverlap(arr);
        for (auto i : ans) {
            for (auto j : i) {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
//Driver Code Ends