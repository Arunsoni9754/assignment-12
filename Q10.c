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
        j=n%10;
        n=n/10;

        printf("%d",j);
                        binary(n);

    }
}
