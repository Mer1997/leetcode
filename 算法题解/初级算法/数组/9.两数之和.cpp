class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size() < 3) return nums;
        else{
            vector<int> result;
            unordered_map<int, int> mymap;
            mymap[target] = 1;
        //    std::sort(nums.begin(), nums.end());
            int find_num;
            for(int i = 0; nums[i] < target && i != nums.size(); i++){
                find_num = target - nums[i];
                for(int j = 0; j != nums.size(); j++)
                    if(nums[j] == find_num){
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                    }
            }
           
        }
        
    }
};