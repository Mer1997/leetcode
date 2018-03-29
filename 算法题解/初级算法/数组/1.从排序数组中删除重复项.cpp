class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++) {
			while (iter + 1 != nums.end() && *iter == *(iter + 1))
				iter = nums.erase(iter);
		}

		return nums.size();
	}
};