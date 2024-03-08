#include<stdio.h>
int op(int* Aa,int* Ab)
{
    int add,sub;
    add = (*Aa) + (*Ab);
    sub = (*Aa) - (*Ab);
    *Aa = add;
    *Ab = sub;
}
int main()
{
    printf("This is Operating program\n");
    int a,b;
    printf("Enter Value for 'a' and 'b' respectively:-\n");
    scanf("%d%d",&a,&b);
    printf("You entered a=%d and b=%d.",a,b);
    op(&a,&b);
    printf("\n\nValue after Operating is:-\na=%d\nb=%d.",a,b);
    return 0;
}