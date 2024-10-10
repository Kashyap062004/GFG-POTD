//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxDistance(vector<int> &a) {
        int n=a.size();
        unordered_map<int,int> m;
        int md=0;
        
        for(int i=0;i<n;i++){
            if(m.find(a[i])!=m.end()){
                md=max(md,i-m[a[i]]);
            }
            else{
                m[a[i]]=i;
            }
        }
        
        return md;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends
