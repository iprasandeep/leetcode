class Solution {
public:
  int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> & grid2)
{
    int m = grid2.size();
    int n = grid2[0].size();
	int count = 0;
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n; j++)
		{
		
			int flag = 1;
			if(grid2[i][j] == 1)
			{
				dfs(grid1, grid2, i, j, flag);
				if(flag == 1) count++;
			}
		}
	}
	return count;
}
void dfs(vector<vector<int>> &grid1, vector<vector<int>> & grid2, int i, int j, int& flag){
	if(i<0 || j<0 || i == grid2.size() || j==grid2[0].size() or grid2[i][j] == 0)
		return;
	if(grid2[i][j] == 0) return;
	
	if(grid2[i][j] == 1)
	{
		if(grid1[i][j] == 0)
		{
			flag  = 0;
			return;
		}
		grid2[i][j] = 0;
	}
	dfs(grid1, grid2, i+1,j,flag);
	dfs(grid1, grid2, i-1, j, flag);
	dfs(grid1, grid2, i, j+1,flag);
	dfs(grid1, grid2, i, j-1, flag);
	
    }
};

// time complexity - >  O(m*n)
// space complexity  ->  O(m*n)
