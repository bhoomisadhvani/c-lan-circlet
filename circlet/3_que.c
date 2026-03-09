//         5
//       4 5
//     3 4 5
//   2 3 4 5
// 1 2 3 4 5


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

        printf("\n");
    }

    return 0;
}