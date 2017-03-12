#include <stdio.h>
#include <map>
#include "iostream"
#include <vector>

using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> vec;
		map<int,int> map;
		for (int j = 0; j < nums.size(); j++) {
			map[nums[j]] = j;
		}
		for (int j = 0; j < map.size(); j++) {
			if (map.find(target - nums[j]) != map.end() && map[target - nums[j]]!=j) {
				vec.push_back(j);
				vec.push_back(map[target - nums[j]]);
				return(vec);
			}
		}
	}
};
int main() {
	vector<int> vec;
	vec.push_back(7);
	vec.push_back(6);
	vec.push_back(5);
	Solution* s = new Solution();
	cout<<s->twoSum(vec,12).at(0);
	delete s;
}