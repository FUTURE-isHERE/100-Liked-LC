class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int n = s.length();
        int res = 0;

        for(int i=0; i<n; i++){
            if(mp[s[i]] < mp[s[i+1]] && i < n-1){
                res -= mp[s[i]];
            }else{
                res += mp[s[i]];
            }
        }

        return res;
    }
};