#include<stdio.h>
void binary(int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    binary(n);
}
void binary(int n)
{
    int i,j;
    if(n>0)
    {
        j=n%8;
        n=n/8;
                binary(n);

        printf("%d",j);
    }
}
