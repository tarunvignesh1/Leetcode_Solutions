class Solution {
public:
    
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        
        if(nums.size()==2)
            if(nums[0]==nums[1])
                return 1;
        
        sort(nums.begin(),nums.end());
        vector <int> count;
        int conseq_count = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1==nums[i]){
                
                if(conseq_count==1)
                    conseq_count=2;
                else
                    conseq_count++;
            }
            else if(nums[i-1]==nums[i])
                continue;
            else if(nums[i-1]+1!=nums[i]){
                conseq_count=1;
            }

           count.push_back(conseq_count); 
        }
        return *max_element(count.begin(),count.end());
    }
};
