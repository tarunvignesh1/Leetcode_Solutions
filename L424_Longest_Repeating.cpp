 int characterReplacement(string s, int k) {
        
        int res = 0;
        int l=0,r=0,n=s.size();
        int max_cnt = 0;
        vector <int> count(26);
        while(r<n){
            
            count[s[r]-'A']++;
            max_cnt = max(max_cnt,count[s[r]-'A']);
            
            if (r-l+1-max_cnt > k){
                count[s[l]-'A']--;
                l++;
            }
            res = max(res,r-l+1);
            r++;
        }
        return res;
    }
