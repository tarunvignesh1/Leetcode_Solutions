class Solution {
public:
    void pout(priority_queue<pair<int,int>> qq){
        
        while(!qq.empty()){
            
            cout<<qq.top().first<<"\t"<<qq.top().second<<endl;
            qq.pop();
        }
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<vector<int>> res;
        
        priority_queue<pair<int,int>> qq;
        if(points.size()==1){
            res.push_back(points[0]);
            return res;
        }
        
        //cout<<"dist for every i\n";
        for(int i=0;i<points.size();i++){
            
            int dist = points[i][0]*points[i][0]+points[i][1]*points[i][1];
            //cout<<dist<<"\t";
            
            qq.push(make_pair(dist,i));
        }
        //cout<<"before k\n";
        //pout(qq);
        while(qq.size()>k){
            qq.pop();
        }
        //cout<<"after k\n";
        //pout(qq);
        
        while(!qq.empty()){
            
            res.push_back(points[qq.top().second]);
            qq.pop();
        }
        return res;
        
    }
};
