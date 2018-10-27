class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mymap;
        vector<int> result;
        for(vector<int>::iterator iter1 = nums1.begin(); iter1 != nums1.end(); iter1++){
            mymap[*iter1]++;
        }
        for(vector<int>::iterator iter2 = nums2.begin(); iter2 != nums2.end(); iter2++){
            if(mymap[*iter2] > 0){ 
                result.push_back(*iter2);
                mymap[*iter2]--;
            }
        }
        return result;
    }
};