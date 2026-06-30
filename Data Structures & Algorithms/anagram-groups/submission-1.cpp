class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;

        // Sort each string to create a unique key for all its anagrams
        for (int i = 0; i < n; i++) {
            string temp = strs[i];
            sort(begin(temp), end(temp));

            // Store original string under its sorted key
            mp[temp].push_back(strs[i]);
        }

        // Collect all grouped anagrams from the map
        for (auto it : mp) {
            res.push_back(it.second);
        }

        return res;
    }
};