class Solution {
public:
    bool isRobotBounded(string ins) {
        
        int dx=0,dy=1;
        ins += ins+ins+ins;
        
        int x=0,y=0;
        for(int i =0;i<ins.size();i++){
            
            if(ins[i]=='G'){
                x += dx;
                y += dy;
            }
            else if(ins[i]=='L'){
                
                swap(dx,dy);
                dx *= -1;
            }
            
            else {
                
                swap(dx,dy);
                dy *= -1;
            }
        }
        
        if(x==0 and y==0)
            return true;
        return false;
        
    }
};
