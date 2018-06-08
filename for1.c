/* Aufgabe 4. Praxis der Programmierung
 *
 * Carlos Peñafiel
 * 
 * 
 */

#include <stdio.h>

int main()
{
    for ( int number = 12 ; number > -1 ; number = number-2 )
    {
        printf("%d, ", number);
    }
    
    printf("\n") ;
    
    for ( int number = -1 ; number > -14 ; number = number - 2 )
    {
        printf("%d, ", number);
    }
    printf("\n");

    for ( int number = 0 ; number*number < 82 ; number++ )
    {
        int number2 = number*number ;
        printf("%d, ", number2);
    }
    
    return 0;
}