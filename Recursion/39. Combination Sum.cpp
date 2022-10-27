class Solution {
    private:
    void findNumbers(vector<int> candidates,int target,vector<vector<int>> &ans,vector<int> ds, int i){
        //  base case 
        if(i==candidates.size()){
        if(target == 0){
            ans.push_back(ds);
        }
            return;
        }
        //  pick up condition 
        if(candidates[i] <= target){
            ds.push_back(candidates[i]);
            findNumbers(candidates , target-candidates[i] , ans , ds , i);
            ds.pop_back();
        }
        findNumbers(candidates,target,ans,ds,i+1);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findNumbers(candidates, target, ans, ds, 0);
        return ans;
    }
};
