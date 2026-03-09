// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45

#include<stdio.h>

int main()
{
  

    for(int i=1;i<=5;i++)
    {
          int n = 41;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",n);
            n++;
            
        }
        printf("\n");
    }

    return 0;
}


