#include <cs50.h>
#include <stdio.h>

/* using a greedy algorithm to find the first optimal solution */
int main(void)
{
    /* using a double variable was necessary, because a float variable was not enough */
    double m;
    do
    {
        m = get_double("Give an input in dollars: ");
    }
    while ( m < 0 );

    /* multiplying the dolars with 100 to get cents */
    double n = 100 * m ;

    /* variable n as number of coins */
    /* 25, 10 , 5 cents and 1 cent are available  */

    /* number of coins */
    int c = 0 ;

    while ( n >= 25 )
    {
        n = n - 25 ;
        c ++ ;
    }

    while ( n >= 10 )
    {
        n = n - 10 ;
        c ++ ;
    }

    while ( n >= 5 )
    {
        n = n - 5 ;
        c ++ ;
    }

    while ( n >= 1)
    {
        n = n - 1 ;
        c ++ ;
    }

    printf("%i\n", c) ;

}
