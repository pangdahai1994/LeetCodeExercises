#include <vector>
using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int m = nums1.size();
		int n = nums2.size();
		int p1 = 0;
		int p2 = 0;
		double result;
		if ((m + n) % 2 == 1) {
			int aim = (m + n) / 2 + 1;
			while ((p1 + p2) < aim) {
				if (p1 == nums1.size()) {
					p2 = aim - p1;
					result = nums2[p2 - 1];
					break;
				}
				else if (p2 == nums2.size()) {
					p1 = aim - p2;
					result = nums1[p1 - 1];
					break;
				}
				if (nums1[p1] < nums2[p2]) {
					result = nums1[p1];
					p1++;
				}
				else {
					result = nums2[p2];
					p2++;
				}
			}
			return result;
		}
		else {
			int aim = (m + n) / 2;
			while ((p1 + p2) < aim) {
				if (p1 == nums1.size()) {
					p2 = aim - p1;
					result = nums2[p2 - 1];
					break;
				}
				else if (p2 == nums2.size()) {
					p1 = aim - p2;
					result = nums1[p1 - 1];
					break;
				}
				if (nums1[p1] < nums2[p2]) {
					result = nums1[p1];
					p1++;
				}
				else {
					result = nums2[p2];
					p2++;
				}
			}
			if (m == p1) {
				result = (result + nums2[p2]) / 2;
				return result;
			}
			if (n == p2) {
				result = (result + nums1[p1]) / 2;
				return result;
			}
			if (nums1[p1] > nums2[p2]) {
				result = (result + nums2[p2]) / 2;
				return result;
			}
			else {
				result = (result + nums1[p1]) / 2;
				return result;
			}
		}
	}
};