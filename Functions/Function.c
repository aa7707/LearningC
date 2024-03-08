#include<stdio.h>

void mult(int number); // without return type with argument
void takein(); // without return type without argument
char cont(char c); // with return type with argument
int Outputcount();//with return type without argument

int out=1;

int main()
{
    takein();
    return 0;
}

void takein()
{
    int num;
    char ch;
    
    printf("You want Multiplication table of - ");
    scanf("%d", &num);

    mult(num);

    printf("Do you want to Exit(y/n):-");
    scanf(" %c", &ch);

    cont(ch);
}

void mult(int number)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", number, i, number * i);
    }
}

char cont(char c)
{
    if (c == 'N' || c == 'n')
    {
        printf("Output No. %d\n",Outputcount());
        takein();
    }
    else if (c == 'Y' || c == 'y')
    {
        return 0;
    }
}
int Outputcount()
{
    out++;
    return out;
}