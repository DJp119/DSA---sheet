class Solution {
    private:
    void findNumbers(vector<int> array,int target,vector<vector<int>> &ans,vector<int> ds, int index){

        //  base case 
        if(target==0){
            ans.push_back(ds);
            return;
        }

        // loop 
        for(int i = index ; i< array.size();i++){
            // if(array[i]<=target) continue;
            if(i>index && array[i]==array[i-1]) continue;
            if(array[i] > target) break;
            ds.push_back(array[i]);
            findNumbers(array,target-array[i],ans,ds,i+1);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findNumbers(candidates, target, ans, ds, 0);
        return ans;
    }
};
