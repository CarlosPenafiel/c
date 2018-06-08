#include <cs50.h>
#include <stdio.h>

/* using a greedy algorithm to find the first optimal solution */
int main(void)
{
    /* using a double variable was necessary, because a float variable was not enough */
    float m;
    do
    {
        m = get_float("Give an input in dollars: ");
    }
    while ( m < 0 );

    /* multiplying the dolars with 100 to get cents */
    int n = (int)( 100 * m ) ;
    printf("value of n %i\n", n) ;

    /* variable n as number of coins */
    /* 25, 10 , 5 cents and 1 cent are available  */

    /* number of coins */
    int c = 0 ;

    if ( n % 25 == 0 || n > 0 )
    {
        c = c + ( n / 25 ) ;
        n = n % 25 ;
    }
    else
    {
        c = c + ( n - ( n % 25 ) ) / 25 ;
        n = ( n % 25 ) ;
        printf("value of n is %i and of c is %i\n", n, c) ;
    }
    printf("value of n is %i and of c is %i\n", n, c) ;

    if ( n % 10 == 0 || n > 0 )
    {
        c = c + ( n/10 ) ;
        n = n % 10 ;
    }
    else
    {
        c = c + ( n - ( n % 10 ) ) / 10 ;
        n = n % 10 ;
        printf("value of n is %i and of c is %i\n", n, c) ;
    }
    printf("value of n is %i and of c is %i\n", n, c) ;

    if ( n % 5 == 0 || n > 0 )
    {
        c = c + ( n / 5 ) ;
        n = n % 5 ;
    }
    else
    {
        c = c + ( n - ( n % 5 ) ) / 5 ;
        n = n % 5 ;
        printf("value of n is %i and of c is %i\n", n, c) ;
    }
    printf("value of n is %i and of c is %i\n", n, c) ;

    if ( n % 1 == 0 || n > 0 )
    {
        c = c + ( n / 1 ) ;
        n = n % 1 ;
    }
    else
    {
        c = c + ( n - ( n % 1 ) ) / 1 ;
        n = n % 1 ;
        printf("value of n is %i and of c is %i\n", n, c) ;
    }
    printf("value of n is %i and of c is %i\n", n, c) ;

    printf("%i\n", c) ;

}
