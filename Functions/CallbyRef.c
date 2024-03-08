#include<stdio.h>
int swap(int* Aa,int* Ab)
{
    int temp;
    temp = *Aa;
    *Aa = *Ab;
    *Ab = temp;
}
int main()
{
    printf("This is Swap program\n");
    int a,b;
    printf("Enter Value for 'a' and 'b' respectively:-\n");
    scanf("%d%d",&a,&b);
    printf("You entered a=%d and b=%d.",a,b);
    swap(&a,&b);
    printf("\n\nValue after swapping is:-\na=%d\nb=%d.",a,b);
    return 0;
}