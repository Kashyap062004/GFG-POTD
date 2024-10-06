//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void bfs(int i,int j,vector<vector<int>>  &v,vector<vector<char>>& g,int n,int m)
    {
        v[i][j]=1;
        queue<pair<int,int>> q;
        q.push({i,j});
        
        while(!q.empty())
        {
            i=q.front().first;
            j=q.front().second;
            q.pop();
            
            for(int r=-1;r<2;r++)
            {
                for(int c=-1;c<2;c++)
                {
                    int nr=i+r;
                    int nc=j+c;
                    if(nr>=0 && nr<n && nc>=0 && nc<m &&
                    g[nr][nc]=='1' && !v[nr][nc])
                    {
                        v[nr][nc]=1;
                        q.push({nr,nc});
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& g) {
        int n=g.size();
        int m=g[0].size();
        vector<vector<int>>  v(n,vector<int>(m,0));
        int c=0;
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!v[i][j] && g[i][j]=='1')
                {
                    c++;
                    bfs(i,j,v,g,n,m);
                }
            }
        }
        
        return c;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends
