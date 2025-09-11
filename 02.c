
#include <stdio.h>

int main() {
 char o;
 float a,b;

    printf ("Enter opreration:");
    scanf("%c", &o);

    printf ("Enter operators 1:");
    scanf("%f", &a);

    printf ("Enter operators 2:");
    scanf("%f", &b);

    if (o =='+')
    {
        printf ("The sum of %g and %g is %g",a,b,a+b);
    }
    else if (o =='-')
    {
        printf ("The subtraction of %g and %g is %g",a,b,a-b);
    }

    else if (o =='*')
    {
        printf ("The multiplication of %g and %g is %g",a,b,a*b);
    }

    else if (o =='/')
    {
       if (b==0)
       {
        printf ("Error: Division by zero is not allowed!\n");

        return 1;
       }
       else {
             printf ("The division of %g and %g is %g",a,b,a/b);
       }
       
    }
    else 
    {
        printf("ERROR please enter appropriate operation");
        return 1;
    }

    return 0;

}