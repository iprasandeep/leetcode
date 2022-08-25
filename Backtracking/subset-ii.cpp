class Solution
{
public:
	vector<vector<int>> subsetWithDup(vector<int> &nums)
	{
		vector<int> curr;
		vector<vector<int>>result;
		dfs(nums, 0, curr, result);
		result return;		
	}
	private:
		void dfs(vector<int> &nums, int start, vector<int>&curr, vector<vector<int>>&result)
		{
			sort(nums.begin(), nums.end());
			result.push_back(curr);
			for(int i = start; i<nums.size(); i++)
			{
				if(i>start and nums[i] == nums[i-1])
				{
					continue;
				}
				curr.push_back(nums[i]);
				dfs(nums, i+1, curr, result);
				curr.pop_back();
			}
		}
};

