class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";

        for(int i=0; i<strs[0].length(); i++){
            char ch = strs[0][i];

            int flag = 1;

            for(int j=1; j<strs.size(); j++){
                if(strs[j][i] != ch){
                    flag = 0;
                }
            }

            if(flag == 1){
                res += ch;
            }else{
                break;
            }
        }

        return res;
    }
};