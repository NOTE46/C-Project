#include <stdio.h>

int main() {
    
    int x,y;
    
    printf("Enter x:");
    if (scanf("%d",&x)!=1)
    {
          printf("Error wrong input");
                  return 1;
    }

    printf("Enter y:");
    if (scanf("%d",&y)!=1)
    {
        printf("Error wrong input");
                 return 1;
    }
    
    if (x>y)
    {
        printf ("X is greater than y");
    }
    
     else if (x<y)
    {
        printf ("X is smaller than y");
    }
    
    else 
    {
        printf("X is equal to Y");
    }
    
    return 0;
}