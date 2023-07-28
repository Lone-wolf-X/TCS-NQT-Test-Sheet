#include<stdio.h>
int main()
{
    // optmize approch with O(1) and o(1) tc and sc
    int  num = 15;
    int i = 1;
while(num > 0)
{
    num = num - i;
    i = i + 2;
    if(num == 0)
    {
        printf("True");
        return 0;
    }
        
}
printf("False");

/*
    bad approch

        for(long long int i = 1; i<=num; i++)
        {
            if(i * i == num)
                return true;
        }     
        return false;
*/

}