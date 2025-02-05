#include<stdio.h>
int main ()
{
    int i, n,count=0;
    printf ("ENTER THE NUMBEr: ");
    scanf ("%d", &n);
        for (i=2;i<n;i++)
        {
	    		if (n%i == 0)
                {
                    count++;
                }
            if (count==2){
                printf ("\t %d",i);
            }

    else
    {
        printf("the number is composite");
    }
}
}
