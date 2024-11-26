//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int kadane(vector<int> &a,int n){
        int s=0,ms=a[0];
        for(int i=0;i<n;i++)
        {
            s=s+a[i];
            if(s>ms) ms=s;
            if(s<0 ) s=0;
        }
        return ms;
    }
    int circularSubarraySum(vector<int> &a) {
        int n=a.size();
        int nonCircularSum = kadane(a, n);
        int totalSum = 0;
        for(int i=0; i<n; i++){
            totalSum += a[i];
            a[i] = -a[i];
        }
              
        int circularSum = totalSum + kadane(a, n);
        if(circularSum == 0) return nonCircularSum;
        return max(circularSum,nonCircularSum);
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends
