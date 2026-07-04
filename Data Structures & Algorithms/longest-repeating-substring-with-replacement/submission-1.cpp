class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen = 0;
        unordered_map<char , int>hash;
        int i=0;
        int res=0;

        for(int j=0;j<s.size();j++){
            hash[s[j]]++;
            maxlen = max(maxlen , hash[s[j]]);

            while((j-i+1) - maxlen > k){
                hash[s[i]]--;
                i++;
            }
            res = max(res , j-i+1);
        }
        return res;
    }
};
