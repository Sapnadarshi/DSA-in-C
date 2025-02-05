#include<stdio.h>
int main ()
{
    int i, prime, up, low, j;
    printf ("ENTER THE LOWER LIMIT : ");
    scanf ("%d", &low);
    printf ("ENTER THE UPPER LIMIT : ");
    scanf ("%d", &up);
    if(low>=2)
    {
        printf ("PRIME NUMBERS ARE : ");
        for (j = low + 1; j < up; j++)
        {
            prime = 1;
            for (i = 2; i < j/2; i++)
                if (j % i == 0)
                {
                    prime = 0;
                    break;
                }
            if (prime)
                printf ("\t %d", j);
        }
    }
    else
    {
        printf("Enter lower number must be greater than 1");
    }
}
