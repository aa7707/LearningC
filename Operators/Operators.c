#include<stdio.h>
int main()
{
    int a = 8;
    int b = 7;
    printf("Arithmetic Operator + for a=8 and b=7 results in %d \n", a+b);// these operators are responsible for calculations
    printf("Arithmetic Operator - for a=8 and b=7 results in %d \n", a-b);
    printf("Arithmetic Operator * for a=8 and b=7 results in %d \n", a*b);
    printf("Arithmetic Operator / for a=8 and b=7 results in %d \n", a/b);
    printf("Arithmetic Operator modulus for a=8 and b=7 results in %d \n", a%b);
    printf("\nRelational Operator == for a=8 and b=7 results in %d \n", a==b);//checks for equality between two numbers, characters etc.
    printf("Relational Operator != for a=8 and b=7 results in %d \n", a!=b);//checks for non equality between two numbers, characters etc.
    printf("Relational Operator < for a=8 and b=7 results in %d \n", a<b);//checks for first character small or not between two characters etc.
    printf("Relational Operator > for a=8 and b=7 results in %d \n", a>b);//checks for first character bigger between two characters etc.
    printf("Relational Operator <= for a=8 and b=7 results in %d \n", a<=b);//checks for smaller or equal between two characters etc.
    printf("Relational Operator >= for a=8 and b=7 results in %d \n", a>=b);//checks for bigger or equal between two characters etc.
    printf("\nLogical Operator && for a=8 and b=7 results in %d \n", (a&&b));// results 1 if both are non zero else 0
    printf("Logical Operator || for a=8 and b=7 results in %d \n", (a||b));// results 1 if one is non zero else 0
    printf("Logical Operator ! for a=8 and b=7 results in %d \n", !(a&&b));// results opposite of logical and and logical or
    printf("\nBitwise Operator & for a=8 and b=7 results in %d \n", (a&b));// Converts given characters to binary form and then performs and or or operations bit-by-bit
    printf("Bitwise Operator | for a=8 and b=7 results in %d \n", (a|b));// Converts given characters to binary form and then performs and or or operations bit-by-bit
    printf("Bitwise Operator ^ for a=8 and b=7 results in %d \n", !(a^b));// exclusive or(XOR) - Converts given characters to binary form and results 1 if both the characters binary bit are 1 and 0 respectively else 0
    printf("\nAssignment Operator = for a = %d \n", a);// this assigns value to any variable
    printf("Assignment Operator += for a=8 and b=7 results in a = %d \n", a+=b);// Works like a=a+b. Value of a changed to a = 15 globally.
    printf("Assignment Operator -= for a=8 and b=7 results in a = %d \n", a-=b);// Works like a=a-b. Value of a changed to a = 8 globally.
    printf("Assignment Operator *= for a=8 and b=7 results in a = %d \n", a*=b);// Works like a=a*b. Value of a changed to a = 56 globally.
    printf("Assignment Operator /= for a=8 and b=7 results in a = %d \n", a/=b);// Works like a=a/b. Value of a changed to a = 8 globally.
    printf("\nSizeof a = %d\n", sizeof(a));// this assigns value to any variable
    return 0;
}