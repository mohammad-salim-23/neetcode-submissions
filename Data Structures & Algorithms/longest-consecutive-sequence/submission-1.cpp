class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int lm = 1;
        int l =1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
           else if(nums[i]!=nums[i-1]+1){
                lm = max(lm,l);
                l=1;
            }
            else{
                l++;
            }
        }
        lm = max(lm,l);
        return lm;
    }
};
