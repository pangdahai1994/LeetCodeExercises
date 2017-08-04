/*
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.
*/
#include "ex_head.h"
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		map<int,bool> a;
		int result = nums.size();
		for (int i = 0; i < nums.size(); i++) {
			if (!a.count(nums[i])) {
				a.insert(make_pair(nums[i],true));
			}
			else {
				vector<int>::iterator it = nums.begin() + i;
				nums.erase(it);
				i--;
				result--;
			}
		}
		return result;
	}
};

int main026() {
	Solution s;
	vector<int> test = {1,2,3,4,2,2,2,2};
	cout << s.removeDuplicates(test);
	system("pause");
	return 0;
}