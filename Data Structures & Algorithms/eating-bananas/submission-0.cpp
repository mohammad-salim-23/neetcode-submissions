class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = INT_MIN;
        for(int p:piles){
            right = max(p,right);
        }
        int res = right;
        while(left<=right){
          int k = left+(right-left)/2;
          long long totalTime = 0;
          for(int p:piles){
            totalTime+=ceil((double)p/k);

          }
          if(totalTime<=h){
            res = k;
            right = k-1;
          }else{
            left = k+1;
          }
        }
        return res;
    }
};
