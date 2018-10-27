class Solution {
public:
    int firstUniqChar(string s) {
        int al[26] = {0};
        int seq[26] = {0},count = 0;
        for(int i = 0; i != s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z' ){
                al[s[i] - 'a']++;
                if(al[s[i] - 'a'] == 1)
                    seq[count++] = s[i] - 'a';
            }
        }
        char key = '0';
        for(int i = 0; i != count; i++){
            if(1 == al[seq[i]]){
                key = 'a' + seq[i];
                break;
            }
        }
        cout << key <<endl;
        if(key  == '0') return -1;
        else{
            int i = 0;
            for(i = 0; i != s.size(); i++){
                if(key == s[i]) return i;
            }

        }
    }
    
};