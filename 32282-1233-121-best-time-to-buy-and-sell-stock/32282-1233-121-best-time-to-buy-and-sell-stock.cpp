class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0, bp=prices[0];
        
        for(int i=0; i<prices.size(); i++)
        {
            if(bp<prices[i])
            {
                mp = max(mp, prices[i]-bp);
            }
            bp = min(bp, prices[i]);
        }

        if(mp<0)
        {
            mp=0;
        }

        return mp;
    }
};