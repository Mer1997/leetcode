class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while (x != 0){
            int temp = res;
            res = res * 10 + x % 10;
            if((res - x % 10) / 10 != temp) return 0; 
            x /= 10;
        }
        return res;
    }
};