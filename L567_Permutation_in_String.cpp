bool checkInclusion(string s1, string s2) {
        int len1 = s1.size();
        int len2 = s2.size();
        
        bool result = false;
        if(len1>len2)
            return result;
        
        int l=0,r=len1-1;
        vector<int> set1(26),set2(26);
        
        for(char ch:s1) set1[ch-'a']++;
        
        for(int i=0;i<=r;i++){
            set2[s2[i]-'a']++;
        }
        
        while(r<len2-1){
            
            if(set1==set2){
                result = true;
                return result;
            }
            else {
                set2[s2[l]-'a']--;
                l++;
                
                r++;
                set2[s2[r]-'a']++;
            } 
        }
        if(set1==set2){
            result = true;
            return result;
        }
      return result; 
    }
