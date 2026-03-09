// 11
// 12 13
// 14 15 16
// 17 18 19 20

#include<stdio.h>

int main()
{
    int n=4;
    int a=11;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}