#include "ex_head.h"

class Solution {
public:
	int trap(vector<int>& height) {
		bool found = true;
		int first = 0;
		int result = 0;
		int size = height.size();
		if (size < 3) return 0;
		while (first < size - 1) {
			if (height[first + 1] < height[first]) {
				break;
			}
			first++;
		}
		if (first == size - 1) {
			return 0;
		}
		int last = height.size() - 1;
		while (last > first) {
			if (height[last - 1] < height[last]) {
				break;
			}
			last--;
		}
		if (last == first) return 0;
		while (true) {
			int index = first;
			while (index < last && height[index] >= height[index + 1]) {
				++index;
			}
			if (index == last) break;
			while (index < last && height[index] <= height[index + 1]) {
				++index; // right
			}
			if (height[first] <= height[index]) {
				for (int temp = first; temp <= index; ++temp) {
					if (height[temp] > height[first]) break;
					result += height[first] - height[temp];
					height[temp] = height[first];
				}
				if (index == last) break;
				first = index;
			}
			else {
				for (int temp = first; temp <= index; ++temp) {
					if (height[index] > height[temp]) {
						result += height[index] - height[temp];
						height[temp] = height[index];
					}
				}
			}
		}
		return result;
	}
};