#include <stdio.h>
void squre(int);
int main()
{
    int x;
    printf("Enter anumber :");
    scanf("%d",&x);
    squre(x);
    return 0;

}
void squre(int n)
{
    if(n>=1)

        {

            squre(n-1);
            printf("%d " ,n*n);
        }

}


