#include<stdio.h>
int main()
{
    int arr[]={1,2};
    printf("Address of first element is - %d\n",&arr[0]);
    printf("Address of first element is - %d\n",arr);
    printf("Address of second element is - %d\n",&arr[1]);
    printf("Address of second element is - %d\n",arr+1);

    printf("Value at address of first element is - %d\n",*(&arr[0]));
    printf("Value at address of first element is - %d\n",*(arr));
    printf("Value at address of first element is - %d\n",arr[0]);
    printf("Value at address of second element is - %d\n",*(&arr[1]));
    printf("Value at address of second element is - %d\n",arr[1]);
    printf("Value at address of second element is - %d\n",*(arr+1));
    return 0;
}