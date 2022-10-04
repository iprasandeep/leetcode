class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
    int perimeter = 0;
	for(int i = 0; i<grid.size(); i++)
	{
		for(int j = 0; j<grid[0].size(); j++)
		{
			if(grid[i][j] == 1)
			{
				perimeter +=4;
				if(i>0) perimeter -= grid[i-1][j]; // up
				if(j>0) perimeter -= grid[i][j-1]; // left
				if(i<grid.size()-1) perimeter -=grid[i+1][j]; // down
				if(j<grid[0].size()-1) perimeter -= grid[i][j+1]; // right
			}
		}
	}
	return perimeter;		
}
};
