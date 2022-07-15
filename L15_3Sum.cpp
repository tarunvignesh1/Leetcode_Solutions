class Solution {
public:
    //void vout(vector<int> ind){ for(int v:ind)  cout<<v<<" "; cout<<endl;}
    
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n = nums.size();
        vector<vector<int>> res;
        
        if(n<3)
            return res;
            
        sort(nums.begin(),nums.end());
        //cout<<"sorted nums :";
        //vout(nums);
 
        for(int i=0;i<n-2;i++){
            if(nums[i]>0)  break;
            
            if(i > 0 and nums[i] == nums[i-1]) continue;
            
            int l = i + 1, r = n-1;
            while(l<r){
               
                int threesum = nums[i]+nums[l]+nums[r];
                if(threesum<0)
                    l++;
                else if(threesum>0)
                    r--;
                else {  
                    res.push_back({nums[i],nums[l],nums[r]});
                
                    while(nums[l]==nums[l+1] and l<r) l++;
                    l++;
                    while(nums[r]==nums[r-1] and l<r) r--;
                    r--;
                }
            }
        }
    return res;
    }
};
