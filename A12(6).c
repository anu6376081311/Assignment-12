#include <stdio.h>
void EvenN(int);
int main()
{
    int x;
    printf("Enter anumber :");
    scanf("%d",&x);
    EvenN(x);
    return 0;

}
void EvenN(int n)
{
    if(n>=1)

        {
            printf("%d " ,2*n);
            EvenN(n-1);

        }

}

