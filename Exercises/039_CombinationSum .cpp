#include "ex_head.h"

class Solution {
public:
	void backtrack(vector<int>& candidates,vector<vector<int>>& resultlist, vector<int>& templist, int left, int start, int end) {
		if (left < 0) return;
		if (left == 0) {
			resultlist.push_back(templist);
			return;
		}
		for (int i = start; i <= end; i++) {
			templist.push_back(candidates[i]);
			backtrack(candidates, resultlist, templist, left - candidates[i] , i , end);
			templist.erase(templist.end() - 1);
		}
	}

	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		int size = candidates.size();
		int start = 0, total = 0;
		vector<vector<int>> result;
		vector<int> temp;
		backtrack(candidates, result, temp, target, start ,size - 1);
		return result;
	}
};