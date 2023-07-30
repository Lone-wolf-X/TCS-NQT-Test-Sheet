#include<stdio.h>
int sort(int arr[] ,int n)
{
    if(n == 1)
    {
        return 1;
    }
    if(arr[n-1] < arr[n-2])
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
