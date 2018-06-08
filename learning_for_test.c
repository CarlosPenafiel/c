#include <stdio.h>
#include <stdlib.h>

#define MAX 60

#define zv printf("\n")

int main()
{
    printf("hello world!\n");
    int n;
    scanf("%d", &n);
    printf("readed number %d\n", n);
    switch(n)
    {
        case 1:
            printf("Tata\n");
            break;
        case 2:
            printf("Tete\n");
            break;
        case 3:
            printf("Tata\n");
            break;
        default:
            printf("Tutu\n");
            break;
    }

    double Function_addition (int var1, int var2) 
    {
        return var1 + var2;
    }

    int quadrat (int n)
    {
        return n * n ;
    }

    int sum = Function_addition(10,20);
    printf("sum is %d\n", sum);

    const double PI = 3.14159 ;

return 0;
}