class Solution {
public:
        
    int trap(vector<int>& height) {
        int n=height.size();
        
        int l=0,r=n-1;
        
        int maxl = height[l], maxr = height[r];
        int vol=0;
        while(l<r){
            
            if(maxl<=maxr){
                l++;
                maxl = max(maxl,height[l]);
                vol += maxl - height[l];
            }
            else {
                r--;
                maxr = max(maxr,height[r]);
                vol +=  maxr - height[r];
            }
        }
        
        return vol;
    }
};
