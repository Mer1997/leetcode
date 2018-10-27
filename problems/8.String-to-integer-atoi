class Solution {
public:
    int myAtoi(string str) {
        int res = 0;
        int i = 0;
        bool symbol = true;
        bool issymbol = false;
        while(i != str.size()){
            if(str[i] == ' '){            
                if( issymbol == true ) 
                   break;
            }
            else if(str[i] == '+'){
                if( issymbol == true ) 
                   break;
                else issymbol = true;
            }
            else if(str[i] == '-'){
                if( issymbol == true ) 
                   break;
                else issymbol = true;
                symbol = false;
            }
            else if(str[i] >= '0' && str[i] <= '9'){
                issymbol = true;
                int temp = res;
                res = res * 10 + (str[i] - '0');
                if((res - (str[i] - '0'))/10 != temp || res < temp){
                    if(symbol == true) return 2147483647;
                    else return -2147483648;
                }
            }
            else break;
            i++;
        }
        if(symbol == false) res = -res;
        return res;
    }
};