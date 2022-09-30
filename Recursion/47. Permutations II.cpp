//  **************mine solution*********************
// // class Solution {
// // private: 
// // void remove(vector<vector<int>> &ans)
// // {
// //     auto end = ans.end();
// //     for (auto it = ans.begin(); it != end; ++it) {
// //         end = std::remove(it + 1, end, *it);
// //     }
 
// //     ans.erase(end, ans.end());
// // }
// // void solve(int index,vector<int>& nums,vector<vector<int>> &ans){
// //     //  base case
// //     if(index >= nums.size()){
// //         ans.push_back(nums);
// //         return;
// //     }

// //     for(int i = index ; i < nums.size();i++){
// //         if(i != index && nums[i]==nums[index])    continue;
// //         swap(nums[index],nums[i]);
// //         solve(index+1,nums,ans);
// //         swap(nums[index],nums[i]);
// //     }

// // }
// // public:
// //     vector<vector<int>> permuteUnique(vector<int>& nums) {
// //         vector<vector<int>> ans;
// //         sort(nums.begin(),nums.end());
// //         int index = 0;
// //         solve(index,nums,ans);
// //         remove(ans);
// //         return ans;
// //     }
// // };

// // ****************** faster solution******************8
// class Solution {
// public:
//     vector<vector<int>>ans;
//     void helper(vector<int> nums,int idx)
//     {
//         if(idx==nums.size())
//         {
//             ans.push_back(nums);
//         }
//         for(int i=idx;i<nums.size();i++)
//         {
//             if(i!=idx && nums[i]==nums[idx])    continue;
//             swap(nums[i],nums[idx]);
//             helper(nums,idx+1);
//         }
//     }
//     vector<vector<int>> permuteUnique(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         helper(nums, 0);
//         return ans;
//     }
// };
// *********************FARAZ solution*******************
class Solution{
    void solve(vector<int>&nums,vector<vector<int>>&ans,int index){
        if(index==nums.size()) {
            ans.push_back(nums);
            return;
                }
        unordered_set<int> s;
        for(int i = index;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()) continue;
            s.insert(nums[i]);
            swap(nums[index],nums[i]);
            solve(nums,ans,index+1);
            swap(nums[index],nums[i]);
        }
    }
    public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>>ans;
    int index = 0 ;
    solve(nums,ans,0);
    return ans;
    }
};
