class Solution {
public:
    bool canEat(vector<int>& piles, int mid, int h) {
        int count = 0; // Total hours required

        for (int &x : piles) {
            // Complete hours for this pile
            count += x / mid;
            // If bananas remain one extra hour is needed
            if (x % mid != 0) count++;
                
        }
        return count <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // Lowest possible eating speed
        int l = 1;
        // Highest possible eating speed
        int r = *max_element(begin(piles), end(piles));
        while (l < r) {
            // Middle eating speed
            int mid = l + (r - l) / 2;
            if (canEat(piles, mid, h)) r = mid; // Current speed works
            else l = mid + 1;
        }
        return l;
    }
};