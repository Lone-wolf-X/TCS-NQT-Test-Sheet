#include<stdio.h>
int fib(int n)
{
    if(n<=2)
        return n;
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i<=n; i++)
    {
        dp[i] =dp[i-1] + dp[i - 2];
    }
    return dp[n];
}
int main()
{
    int n = 10;
    int ans = fib(10);
    printf(" Ans - %d",ans);
    return 0;
}