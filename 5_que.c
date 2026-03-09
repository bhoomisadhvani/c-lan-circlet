//         5
//       4 5 4
//     3 4 5 4 3
//   2 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1


#include<stdio.h>

int main()
{
    int n=5;

    for(int a=n;a>=1;a--)
    {
        for(int b=1;b<a;b++)
        {
            printf("  ");
        }

        for(int c=a;c<=n;c++)
        {
            printf("%d ",c);
        }

         for(int l=n-1;l>=a;l--)
        {
            printf("%d ",l);
        }


        printf("\n");
    }

    return 0;
}