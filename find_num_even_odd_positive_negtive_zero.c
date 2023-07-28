#include<stdio.h>
int main()
{
    int n = -100;
    if(n > 0)
    {
        printf("%d is positive numner.\n",n);
    }
    if(n == 0)
    {
        printf("%d is zero.\n",n);
    }
    if(n % 2 == 0)
    {
        printf("%d is even number.\n",n);
    }
    if(n %  2 != 0)
    {
        printf("%d is odd number.\n",n);
    }
    if(n < 0)
    {
        printf("%d is negtive number.\n",n);
    }

    /*      // Another approch //
        if (num > 0) {
        cout << "Positive number" << endl;
    }
    else if (num == 0) {
        cout << "Zero" << endl;
    }
    else {
        cout << "Negative number" << endl;
    }
 
    // Checking for odd and even
    if (num % 2 == 0) {
        cout << num << " is Even" << endl;
    }
    else {
        cout << num << " is Odd" << endl;
    }
    
        */
    return 0;
} 