class Solution {
public:
    typedef pair<int,int> P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mpp;
        for(int &i : nums){
            mpp[i]++;
        }

        // Define Min Heap
        priority_queue<P , vector<P> , greater<P>> pq;

        // Push Element in minHeap

        for(auto &it : mpp){
            int value = it.first;
            int freq = it.second;

            pq.push({freq,value});
            if(pq.size()>k) pq.pop();

        }
        // result
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
