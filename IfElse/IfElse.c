#include<stdio.h>
int main()
{
    int c;
    printf("Here is the list of exams held. \n1. Science\n2. Maths\n If you passed any one of them \"Enter 1 or 2\"as listed here near the subject.\n If you passed all of them,\"Enter 3\":-\n");
    scanf("%d",&c);
    if(c==1)
    {
        printf("You passed Science and here is you 15$ as promised. It would have been great if you have cleared Maths too.");
    }
    else if(c==2)
    {
        printf("You passed Maths and here is you 15$ as promised. It would have been great if you have cleared Science too.");
    }
    else if(c==3)
    {
        printf("Since you passed Science and Maths exams, here is you 45$ as promised. Keep it up");
    }
    else
    {
        printf("Invalid!!");
    }
    return 0;
}
