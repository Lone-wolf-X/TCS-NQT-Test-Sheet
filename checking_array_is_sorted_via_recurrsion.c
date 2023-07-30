#include<stdio.h>
int sort(int arr[] ,int n)
{
    if(n == 0)
    {
        return 1;
    }
    if(arr[n] < arr[n-1])
    {
        return 0;
    }
    sort(arr , n-1);
}
int main()
{
    int n = 5;
    int arr[5] = {2, 1, 3, 4, 5};
    if(sort(arr , 5))
    {
        printf("True\n");
    }
    else
    {
        printf("False");
    }
}