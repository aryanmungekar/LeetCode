class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start=0, end=n-1, ans;

        while(start<end)
        {
            int mid = start+(end-start)/2;

            if(mid==0)
                {
                    ans=nums[0];
                    break;
                }

            else if(nums[n-1]!=nums[n-2])
                {
                    ans=nums[n-1];
                    break;
                }

            else if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
            {
                ans=nums[mid];
                break;
            }

            //even
            else if(mid%2==0)
            {
                if(nums[mid]==nums[mid-1])
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }

            //odd
            else
            {
                if(nums[mid]==nums[mid+1])
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }
        }
        return ans;
    }
};