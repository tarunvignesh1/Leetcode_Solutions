int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1)
        {
            if(nums[0]==target)
                return 0;
            else
                return -1;
        }
        auto pos = find(nums.begin(),nums.end(),target);
        if(pos!=nums.end())
        {
            int index = pos-nums.begin();
            return index;
        }
        return -1;
        
    }
