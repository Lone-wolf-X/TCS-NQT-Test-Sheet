#include<stdio.h>
int convertFive(int num) {
   int ans = 0;
   int x = 1;
   int rem;
   while(num > 0)
   {
        rem = num% 10;
        num = num/10;
        if(rem == 0)
        {
            rem = 5;
        }
        ans = ans + rem*x;
        x = x*10;
   }
   return ans;
}
int main()
{
    int num = 1005;
    int ans = covertFive(num);
    printf("%d",ans);
    
}