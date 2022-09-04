string longetpalindrome(string s)
{
	int maxStart = 0;
	int maxLength = 1;
	
	for(int i =0; i<s.size()-1; i++)
	{
		middleOut(s, i, i, maxStar, maxLength);
		middleOut(s, i, i+1, maxStart, maxLength);
	}
	
	return s.substr(maxStr, maxlength);
}

private:
	void middleOut(string s, int i, int j, int& maxStart, int& maxLength)
		{
			i--;
			j++;
		
			if(j-i-1 > maxLength)
			{
				maxStart = i+1;
				maxLength = j-i-1;
			}
}		}
