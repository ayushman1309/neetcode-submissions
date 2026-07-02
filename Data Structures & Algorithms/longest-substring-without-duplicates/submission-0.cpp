class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Maintain a window [i...j] that always contains unique characters.
        //i = left boundary of the window
        //j = right boundary of the window
        //Sett = stores all characters currently in the window
        //Whenever a duplicate is found, shrink the window from the left until the duplicate is removed.
        int n = s.length();
        int maxL=0; //stores the length of max substring
        unordered_set<char>ch;
        int i=0;

        for(int j=0;j<n;j++){
            if(ch.count(s[j]) == 0){
                ch.insert(s[j]);
                maxL=max(maxL,j-i+1);
            }
            else{
                while(ch.count(s[j])){
                    ch.erase(s[i]);
                    i++;
                }
                ch.insert(s[j]);
            }
        }
        return maxL;
    }
};
