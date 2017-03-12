#include <stdio.h>
#include "iostream"
#include <vector>

using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		for (int j = 0; j < nums.size(); j++) {
			for (int k = j + 1; k < nums.size(); k++) {
				if (nums.at(k) + nums.at(j) == target) {
					vector<int> vec;
					vec.push_back(j);
					vec.push_back(k);
					return(vec);
				}
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