#include<stdio.h>
int singleNumber(int* nums, int numsSize){
int result = 0;
for(int i = 0; i<numsSize; i++)
{
    result ^= nums[i];
}
return result;
}
int main()
{
    int nums[5] = {4,1,2,1,2};
    int n = 5;

    int ans = singleNumber(nums , n);
    printf("Single number is - %d",ans);
}
/*
    It is done by XOR operation --- in Linear time and constant space 



    expalinantion---;;;;;;;

    
Certainly! Let's go through the example array {4, 1, 2, 1, 2} and step-by-step explanation of the line inside the loop:

for (int i = 0; i < n; i++) {
    result ^= arr[i];
}
Initialize result to 0.

Start iterating through the array: {4, 1, 2, 1, 2}.

i = 0: result ^= arr[0] is the same as result = result ^ arr[0], which is result = 0 ^ 4. Performing XOR on two numbers gives you 1 in the binary representation wherever the bits are different, and 0 where they are the same. So, 0000 ^ 0100 results in 0100, which is 4 in decimal.
i = 1: result ^= arr[1] is the same as result = result ^ arr[1], which is result = 4 ^ 1. XOR of 0100 and 0001 is 0101, which is 5 in decimal.
i = 2: result ^= arr[2] is the same as result = result ^ arr[2], which is result = 5 ^ 2. XOR of 0101 and 0010 is 0111, which is 7 in decimal.
i = 3: result ^= arr[3] is the same as result = result ^ arr[3], which is result = 7 ^ 1. XOR of 0111 and 0001 is 0110, which is 6 in decimal.
i = 4: result ^= arr[4] is the same as result = result ^ arr[4], which is result = 6 ^ 2. XOR of 0110 and 0010 is 0100, which is 4 in decimal (back to 4).
After iterating through the entire array, the final value of result is 4, which is the single number that appears only once in the given array.

So, the key idea here is that XORing the elements of the array in this manner cancels out the pairs of identical numbers, leaving only the single number remaining.
*/
