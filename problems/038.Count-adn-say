class Solution {
public:
    string countAndSay(int n) {
        string str = "1";
        string s = "";
        int around = 1;
        while(around != n){
            int i = 0, num = str[0] - '0', numsize = 0;
            char a;
            for(i = 0; i != str.size(); i++){
                if(str[i] - '0' == num) numsize++;
                else{
                    a = '0' + numsize;
                    s = s + a;
                    a = '0' + num;
                    s = s + a;
                    num = str[i] - '0';
                    numsize = 1;
                }
            }
            a = '0' + numsize;
            s = s + a;
            a = '0' + num;
            s = s + a;
            num = str[i] - '0';
            numsize = 1;
            str = s;
            s = "";
            around++;
        }
        return str;
    }
};