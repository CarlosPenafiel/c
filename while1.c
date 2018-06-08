/* Aufgabe 4. Praxis der Programmierung
 *
 * Carlos Peñafiel
 * 
 * 
 */

#include <stdio.h>

int main()
{
    int number1 = 12 ;
    while ( number1 > -1 )
    {
        printf("%d, ", number1);
        number1 = number1 - 2 ;
    }
    
    printf("\n") ;
    
    int number2 = -1 ;
    while ( number2 > -14 )
    {
        printf("%d, ", number2);
        number2 = number2 - 2 ;
    }
    printf("\n");

    int number3 = 0 ;
    while ( number3*number3 < 82 )
    {
        printf("%d, ", number3*number3);
        number3++ ;
    }
    
    return 0;
}