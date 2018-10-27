class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool flag = true;
        for (int i = digits.size() - 1; flag == true && i != -1; i--){
            digits[i] += 1;
            if(digits[i] == 10) digits[i] = 0;
            else flag = false;
        }
        
        if(digits[0] == 0){
            digits.push_back(0);
            for(int i = digits.size() - 1; i != 0; i--){
                digits[i] = digits[i - 1];
            }
            digits[0] = 1;
        }
        
        return digits;
    }
};