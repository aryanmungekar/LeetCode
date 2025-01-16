class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int cur_val=0;
        int max_val=INT_MIN;
        
        for(int val : nums){
            cur_val = cur_val+val;
            max_val = max(cur_val, max_val);
            
            if(cur_val<0){
                cur_val=0;
            };
        };
        return max_val;
    };
};