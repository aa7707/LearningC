#include<stdio.h>
int fibrec(int num);
int main()
{
    int n;
    printf("Enter a number to print fibonacci series number at that index:-");
    scanf("%d",&n);
    printf("\nThe number at position %d of fibonacci series is:-%d",n,fibrec(n));
    return 0;
}
int fibrec(int num)
{
    if(num==1 || num==2)
    {
        return num-1;
    }
    else
    {
        return fibrec(num-1)+fibrec(num-2);
    }
}