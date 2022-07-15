class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> ind;
        
        
        if(numbers.size()==2) {ind.push_back(1); ind.push_back(2); return ind;}
        
        int i=0,j=numbers.size()-1;
        
        while(i<j){
            
            if(numbers[i]+numbers[j]==target){
                ind.push_back(i+1);
                ind.push_back(j+1);
                return ind;
            }
            else if(target-numbers[j]>numbers[i])
                i++;
            else if(target-numbers[j]<numbers[i])
                j--;
        }
        return ind;
        
    }
};
