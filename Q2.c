#include<stdio.h>
void natural(int);
int main()
{
    int n;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    natural(n);
    return 0;
}
void natural(int i)
{
    if(i>0)
    {
        printf("%d ",i);
        natural(i-1);
    }
}
