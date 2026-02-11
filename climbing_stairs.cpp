class Solution {
public:
    int climbStairs(int n) {
      if(n<=2) return n;
      int prev2=1; //if we are at stair 2 then we need 1 step to reach 3;
      int prev1=2; //if previous step is stair 1 then we need 2 stairs
      //similarly we calculate futher for next stairs if it is n just changing last possible steps;
      for(int i=3;i<=n;i++){
        int curr =prev1 +prev2;// because we can reach from stair1 behind or stair 2 behind;
        prev2=prev1;
        prev1=curr;
      }
      return prev1;
    }
};
