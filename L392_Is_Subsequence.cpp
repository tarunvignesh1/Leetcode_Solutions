class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        bool result = false;
        int n=s.size(),r = t.size();
        if(n==0)
            return true;
        
        if(n== 1 and r == 1)
            return s[0]==t[0];
        
        if(n>r)
            return result;
        
        int i=0,j=0;
        while(i<n and j<r){
            
            if(s[i]==t[j]){
                
                i++;
            }
            
            j++;
        }
        
        
        if(i==n)
            result = true;
        
        return result;
    }
};
