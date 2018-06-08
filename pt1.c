/*
 *
 * Carlos Peñafiel
 * 
 * Pointer
 */


#include <stdio.h>
#include <stdlib.h> 

int main()
{
   int i ;
   int *ptr ;
   ptr = &i ;
   i = 1 ;
   printf("ptr is %p\n", ptr) ;
   printf("ptr zeigt den Wert %p\n", *ptr) ;
   printf("i is gleich %d\n", i) ;
   *ptr = 2 ; 
   printf("i is gleich %d\n", i) ;

    return 0 ;
}