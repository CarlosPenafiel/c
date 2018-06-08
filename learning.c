#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str2[1024];
    printf("Geben Sie Ihren Namen ein!");
    fgets(str2, 1024, stdin); // max. 1023 Zeichen
    // von stdin lesen
    // und ab Adresse str2 speichern
    printf(" ... %s ... ", str2);

    //  A:  char * fgets (char * s, int size, FILE * stream);
    //  B:  char * gets (char * s);              
    // B is gefährlich, da bereits besetzte Speicherplätze 
    // überschrieben werden können

    // int scanf (const char * format, ...) ;

    float n;
    printf("Geben Sie eine Zahl ein: ");
    int status = scanf("%f", &n);
    if (status == 0) {
        printf("Sie haben keine Zahl eingegeben.\n\n");
        exit(EXIT_FAILURE);
    }
    printf("Die Zahl ist %f.\n",  n) ;

    char str[20];
    scanf("%19s", str);
    printf("the string is %s", str);
    printf("%char", str[19]);

    // int getchar();

    char stro[40];
    int char_in;
    int i = 0;
    while(i < 40 && (char_in = getchar()) != '\n')
        stro[i++] = (char) char_in;
    printf("%s", stro);

    /*
    // Leeren des Eingabepuffers von scanf
    int c, state, zahl;
    state = scanf("%d", &zahl);
    if (state == 0)
        do
            c = getchar();
        while (c != '\n');
    */

    // int printf (const char * format, ...);

    // Länge von String
    int lengthOfString(char * ar) {
        int i = 0 ;
        while (ar[i] != '\0') {
            i++;
        }
        return i;
    }

    char *s = "Hallo Du!";
    int no = lengthOfString(s);
    printf("\n %d", no);

    /* Funktionen von <strin.g>
     * strlen
     * strcpy
     * strcat
     * strcmp
     * strncmp
     * 
     * Funktionen zur Speicherbearbeitung
     * memcpy
     * memmove
     * memcmp
     * memchr
     * memset
     * 
     * Parameterübergabe beim Programmaufruf
     * argc (argument counter)
     * argv (argument vector)
     * 
     * <stdlib.h>
     * double atof : ascii to float
     * int atoi : ascii to int
     * long atol : ascii to long
     * 
     * 
     */



}