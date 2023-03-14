#include <stdio.h>
void oddN(int);
int main()
{
    int x;
    printf("Enter anumber :");
    scanf("%d",&x);
    oddN(x);
    return 0;

}
void oddN(int n)
{
    if(n>=1)

        {
            printf("%d " ,2*n-1);
            oddN(n-1);

        }

}

