/*
 * Carlos Peñafiel
 * 
 * PDP - 2. Aufgabenblatt
 */

#include <stdio.h>
#include <stdlib.h>

int y;

int main()
{
    /*
    Beispiel von Fehlerbehebung:
    if (Fehlerursache) {
    printf("Fehler in f: Fehlerursache ist eingetreten.\n");
    exit(EXIT_FAILURE); // in <stdlib.h> definiert
    }
    */

    int f( int first_var, int second_var) ;
    int x = 4;
    printf("Geben Sie eine ganze Zahl ein: ") ;
    scanf("%d", &y) ;
    if( y == 0 )
    {
        printf("Sie haben 0 eingegeben. Diese Zahl ist nicht erlaubt.\n") ;
        printf("Program wird beendet.\n") ;
        exit(EXIT_FAILURE) ;
    }
    printf("Die eingegebe Zahl is %d\n", y) ;
    int b = f(x, y) ; 
    printf("hier eine Zahl %d", b) ;
    return 0 ;
    
} 

int f( int first_var, int second_var )
{
    return 2*(first_var*first_var)/second_var ;
}