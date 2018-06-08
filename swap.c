/*
 *
 * Carlos Peñafiel
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10 ;
    int b = 5 ;
    printf("Zwei Variablen %d and %d\n", a, b) ;
    int swap(int *first_p, int *second_p) ;
    swap(&a, &b) ;
    printf("Zwei Variablen %d and %d\n", a, b) ;

}

int swap(int *first_p, int *second_p)
{
    int b = *first_p ;
    *first_p = *second_p ;
    *second_p = b ;
    
    return 0 ;
}