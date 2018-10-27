class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++){
            result ^= *iter;
        }
        return result;
    }
};