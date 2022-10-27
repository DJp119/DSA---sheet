class Solution {
    private:
    void solve(int k , int n , vector<vector<int>> & ans,vector<int> ds,int index){
            // if(n<0 || ds.size() > k) return;
            if( n == 0 ){
                if(ds.size()==k)  ans.push_back(ds);
                return;
            }

            // loop 
            for(int i = index ; i<=9;++i){
                if(i > index && (i)==(i-1) ) continue;
                if(i>n) break;
                ds.push_back(i);
                solve(k,n-i,ans,ds,i+1);
                ds.pop_back();
            }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds; 
        int index = 1;
        // target is n  
        // ds for inputing in the answer 
        //  k is the number of times to be taken 
        solve(k,n,ans,ds,1);
        return ans;
    }
};
