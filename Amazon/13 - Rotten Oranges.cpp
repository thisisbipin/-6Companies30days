class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int m=grid.size(),n=grid[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        queue<vector<int>> q;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]==2)
                    q.push(vector<int>{i,j}),vis[i][j]=true;
        int res=0;
        while(!q.empty())
        {
            int qs=q.size();
            while(qs--)
            {
                vector<int> curr = q.front(); q.pop();
                for(int dx=-1;dx<=1;dx++)
                {
                    int x = curr[0]+dx;
                    int y= curr[1];
                    if(x>=0 && x<m)
                        if(grid[x][y]==1 && !vis[x][y])
                            q.push(vector<int>{x,y}),vis[x][y]=true;
                }
                for(int dy=-1;dy<=1;dy++)
                {
                    int x=curr[0];
                    int y = curr[1]+dy;
                    if(y>=0 && y<n)
                        if(grid[x][y]==1 && !vis[x][y])
                            q.push(vector<int>{x,y}),vis[x][y]=true;
                }
                
            }
            res++;
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]==1 &&!vis[i][j])
                    return -1;
        return res==0? res:res-1;
    }
};