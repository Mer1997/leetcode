class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            if (m.find(nums[i]) != m.end()) return true;
            m.insert(unordered_map<int, int>::value_type(nums[i],1));
        }
        return false;
    }
};