//Multiplication table of User inputted Number
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number of which you want the multiplication table of: ");
    scanf("%d",&number);
    printf("\n%d X 1 = %d",number, (number*1));
    printf("\n%d X 2 = %d",number, (number*2));
    printf("\n%d X 3 = %d",number, (number*3));
    printf("\n%d X 4 = %d",number, (number*4));
    printf("\n%d X 5 = %d",number, (number*5));
    printf("\n%d X 6 = %d",number, (number*6));
    printf("\n%d X 7 = %d",number, (number*7));
    printf("\n%d X 8 = %d",number, (number*8));
    printf("\n%d X 9 = %d",number, (number*9));
    printf("\n%d X 10 = %d",number, (number*10));
    return 0;
}
