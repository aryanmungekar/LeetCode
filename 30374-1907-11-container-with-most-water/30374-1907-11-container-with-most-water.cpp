class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int lp=0, rp=n-1, he=0, wi=0, ans=0, best=0;

        while(lp<rp)
        {
            he = min(height[lp], height[rp]);
            wi = rp-lp;

            ans = he * wi;

            best = max(best, ans);

            if(height[lp]<height[rp])
                lp++;
            else
                rp--;
        }

        return best;

    }
};