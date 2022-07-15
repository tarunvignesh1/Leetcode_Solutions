class Solution {
public:
    int area(int i1,int i2,int h1, int h2)
    {   
        int min_h = (h1>h2)?h2:h1;
        return (i2-i1)*min_h;
    }
    
    
    int maxArea(vector<int>& height) {
        
        int l=0,r = height.size()-1;
        int res = 0;
        while(l<r){
            int a = area(l,r,height[l],height[r]);
            //cout<<"area\t"<<a<<"\tl, r\t"<<l<<"\t"<<r<<"\th1\t"<<height[l]<<"\th2\t"<<height[r]<<endl;
            if(res<=a){
                res = a;
            }
            
            if(height[l]<=height[r])
            {
                l++;
            }
            else if(height[l]>height[r])
            {
                r--;
            }
            
        }
    return res;
    }
};
