//Star Pattern - Triangular and Reversed Triangular
#include<stdio.h>
int main()
{
    int op,row;
    label:
    printf("Enter 0 for Triangular or 1 for Reversed Triangular star pattern:-");
    scanf("%d",&op);
    if(op==0)
    {
        printf("Enter No. of rows:-");
        scanf("%d",&row);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if(op==1)
    {
        printf("Enter No. of rows:-");
        scanf("%d",&row);
        for(int i=row;i>=1;i--)
        {
            for(int j=i;j>0;j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Input!!\nTry Again.");
        goto label;
    }
    return 0;
}