#include<stdio.h>
void printN(int);
int main()
{
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    printN(x );
    printf("\n");
    return 0;

}
void printN(int n)
{
    if(n>=1)
    {
        printf(" %d",n);
        printN(n-1);
    }
}

