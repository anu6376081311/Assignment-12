#include<stdio.h>
void binary(int n);
int main()
{
    int x;
    printf("Enter the number which you want binary :");
    scanf("%d",&x);
    binary(x);
    return 0;

}
void binary(int n)
{
    if(n==0)
    return;
 binary(n>>1);
printf("%d",n&1);
}