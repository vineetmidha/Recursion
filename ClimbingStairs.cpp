// https://leetcode.com/problems/climbing-stairs/

    int climbStairs(int n) {
        if (n<=1) return 1;
        
        int ans1 = climbStairs(n-1);
        int ans2 = climbStairs(n-2);
        
        return ans1+ans2;
    }
