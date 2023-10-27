class Solution {
public:
    int fib(int n) {
        int prev1=1;
        int prev2=0;
        int current=0;
        for(int i=2;i<=n;i++)
        {
            current=prev1+prev2;
            prev2=prev1;
            prev1=current;
        
        }
        if(n==0)
                return 0;
        return prev1;
        
    }
};