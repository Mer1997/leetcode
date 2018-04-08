class Solution {
public:
    bool isAnagram(string s, string t) {
        int al1[26] = {0};
        int seq1[26] = {0},count1 = 0;
        for(int i = 0; i != s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z' ){
                al1[s[i] - 'a']++;
                if(al1[s[i] - 'a'] == 1)
                    seq1[count1++] = s[i] - 'a';
            }
        }
        int al2[26] = {0};
        int seq2[26] = {0},count2 = 0;
        for(int i = 0; i != t.size(); i++){
            if(t[i] >= 'a' && t[i] <= 'z' ){
                al2[t[i] - 'a']++;
                if(al2[t[i] - 'a'] == 1)
                    seq2[count2++] = t[i] - 'a';
            }
        }
        
        if(count1 != count2) return false;
        else{
            for(int i = 0; i != count1; i++){
                if(al1[seq1[i]] != al2[seq1[i]]) return false;
            }
            return true;
        }

    }
};