#include <stdio.h>

int main()
{
    int num, i, flag = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // 0 and 1 are not considered prime
    if(num == 0 || num == 1)
    {
        printf("%d is not a prime number.\n", num);
    }
    else
    {
        for(i = 2; i <= num/2; ++i)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
        {
            printf("%d is a prime number.\n", num);
        }
        else
        {
            printf("%d is not a prime number.\n", num);
        }
    }
    
    return 0;
}
