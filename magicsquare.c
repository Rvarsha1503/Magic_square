#include <stdio.h>

int digits(int n);
 
int main ()
{
    int a[7][7] = {0};
    int n,num=2, i=0, j;
    printf("Enter an odd number for the sqaure matrix index : ");
    scanf ("%d", &n);

    j=n/2;

    a[0][n/2] = 1;

    int c=0;

    for (;num<=(n*n);)
    {
    
        i= i-1;
        j=j-1;

        if (((i<0) && j<0) && (a[i+n][j+n]!= 0) )
        {
            i=i+2;
            j= j+1;
        }

        if (i<0 && j<0)
        {
            i=i+n;
            j=j+n; 
        }
        else if (i<0)
        {
            i=i+n;
        }      
        else if (j<0)
        {
            j=j+n;
        }
        if (a[i][j] != 0)
        {
            i=i+2;
            j=j+1;
          
        }
       
       a[i][j] = num;
        num ++;
        c++;
    }

   
   for (int j=0; j<n; j++)
    {
        printf("________");       
    }

    printf("\n");
    for (int i=0; i<n; i++)
    {
        
        for (int j=0; j<n; j++)
        {
            printf("|       ");
        }
        printf("|");
        printf("\n");
        
        for (int j=0; j<n; j++)
        {
            if (digits(a[i][j])==1)
            {
                printf("|   %d   ", a[i][j]);
            }
            else 
            {
                printf("|  %d   ", a[i][j]);
            }
            
        }
        printf("|");
        printf("\n");
        for (int j=0; j<n; j++)
        {
            printf("|_______");
        }
        printf("|");
        printf("\n");
        
    }
  return 0;
}

int digits(int n)
{
    int c = 0;
    while (n != 0)
    {
        c++;
        n /= 10;
    }
    return c;
}
 

