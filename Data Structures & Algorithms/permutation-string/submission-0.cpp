class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> cnt1(26, 0), cnt2(26, 0);

        // Frequency of s1 and first window of s2
        for (int i = 0; i < s1.size(); i++) {
            cnt1[s1[i] - 'a']++;
            cnt2[s2[i] - 'a']++;
        }

        if (cnt1 == cnt2) return true;

        // Sliding window
        for (int i = s1.size(); i < s2.size(); i++) {
            cnt2[s2[i] - 'a']++;           
            cnt2[s2[i - s1.size()] - 'a']--;

            if (cnt1 == cnt2) return true;
        }

        return false;
    }
};