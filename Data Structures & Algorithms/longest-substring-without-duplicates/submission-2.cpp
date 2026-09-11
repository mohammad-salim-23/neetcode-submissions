class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int,int>mp;
        int n = s.size();
       int left =0;
      
        int maxCnt = 0;
        for(int right=0;right<n;right++){
            if(mp.count(s[right]) && mp[s[right]]>=left){
                left = mp[s[right]]+1;
               
            }
            
            mp[s[right]] = right;
            maxCnt = max(maxCnt,right-left+1);
        }
       
        return maxCnt;
    }
};
