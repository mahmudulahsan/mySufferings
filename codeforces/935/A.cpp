#include<stdio.h>
int main()
{
    int n, i, count=0;

    scanf("%d", &n);

    for(i=1;i<n;i++)
    {
        if((n-i)%i==0)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
