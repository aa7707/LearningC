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
    int a=0;
    int b=1;
    for (int i = 0; i <num-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}