class Solution {
public:
    int maxArea(vector<int>& height) {
        // take two pointer first one start from starting and other is from last
        int i=0;
        int j=height.size()-1;
        int maxWt = 0;
        while(i<j){
            // find the width of the container
            int wd = j-i;
            // find height of the container
            int ht = min(height[i],height[j]);
            // calculate area
            int a = wd*ht;
            maxWt = max(maxWt , a);
            if(height[i] > height[j]) j--;
            else i++;
        }
        return maxWt;
    }
};
