class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> result;
            
            result.push_back({1});
            
            if(numRows==1)
                return result;
            result.push_back({1,1});
                
            if(numRows==2)
                return result;
            int cnt = 2;
            while(cnt<numRows){
                vector<int> row;
                int n = result[cnt-1].size(),val_cnt = 0;
                row.push_back(1);
                while(val_cnt<n-1){
                    row.push_back(result[cnt-1][val_cnt]+result[cnt-1][val_cnt+1]);
                    val_cnt+=1;
                }
                row.push_back(1);
                result.push_back(row);
                cnt++;
            }
        
    return result;
    }
};
