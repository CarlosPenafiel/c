#include <cs50.h>
#include <stdio.h>

/* mario script more confortable. It makes two pyramides. */
int main(void)
{
    int h;
    /* condition: height of pyramide between 0 and 23 */
    /* Part I: getting height of pyramide from user input */
    do
    {
        h = get_int("Please enter the heigth of the pyramid (0-23):");
    }
    while ( (h < 0) || (h > 23) );
    /* printf("%i\n",h); */


    /* Part II: printing of pyramide */
    int spaces;
    int all_rows;
    int hashs;
    for (all_rows = 1 ; all_rows < h + 1 ; all_rows++)
    {
        /* it prints the left spaces */
        for (spaces = (h - all_rows); spaces > 0 ; spaces--)
        {
            printf(" ");
        }

        /* it prints the left hashs */
        for (hashs = (all_rows) ; hashs > 0 ; hashs--)
        {
            printf("#");
        }

        /* it prints two spaces as gap between pyramides */
        printf("  ");

        /* it prints the right hashs */
        for (hashs = (all_rows) ; hashs > 0 ; hashs--)
        {
            printf("#");
        }

        /* it prints the right spaces */
        /* for (spaces = (h - all_rows); spaces > 0 ; spaces--)
        {
            printf(" ");
        }
        */

        printf("\n");
    }
}
