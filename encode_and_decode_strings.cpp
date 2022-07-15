class Solution {
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    void vout(vector<string> s){

        for(string v:s)
        cout<<v<<endl;

    } 

    string encode(vector<string> &strs) {
        
        string ans = "";
        for(int i=0;i<strs.size();i++){
            ans +=to_string(strs[i].size())+"#"+strs[i];
        }
        cout<<"encoding : ";
        cout<<ans<<endl;;

        return ans;
    }

    /*
     * @param str: A string
     * @return: dcodes a single string to a list of strings
     */
    vector<string> decode(string &str) {
       vector<string> ans;
       for(int i=0;i<str.size();){
           //cout<<"str[i] "<<str[i]<<endl;
           int len = int(str[i]-'0');
           cout<<"len :"<<len<<endl;
           string val = "";
           i+=2;
           while(len--){
               val.push_back(str[i]);
               i++;
           }
           ans.push_back(val);
       }
       //cout<<"decoding : ";
       //vout(ans);
       return ans;
    }
};
