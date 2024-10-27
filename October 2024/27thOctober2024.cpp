//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool findTriplet(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end(),greater<int>()); 
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(a[i]==a[j]+a[k]) return true;
                else if(a[i]<a[j]+a[k]) j++;
                else k--;
            }
            
        }
        return false;
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
        Solution obj;
        bool res = obj.findTriplet(arr);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        // cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
