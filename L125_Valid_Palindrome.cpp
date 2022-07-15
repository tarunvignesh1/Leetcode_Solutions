class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.size()==1)
            return true;
        
        
        int i=0,j=s.size();
        
        while(!(i>=j)){
            if(!iswalnum(s[i])) i++;
            if(!iswalnum(s[j])) j--;
            
            
            if(iswalnum(s[i]) and iswalnum(s[j])){
                
                s[i]=tolower(s[i]);
                s[j]=tolower(s[j]);
                if(s[i]!=s[j])
                    return false;
             i++; j--;
                
            }
            
        }
        return true;
    }
};
