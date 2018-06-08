#include <cs50.h>
#include <stdio.h>

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
        for (spaces = (h - all_rows); spaces > 0 ; spaces--)
        {
            printf(" ");
        }
        printf("#");
        for (hashs = (all_rows) ; hashs > 0 ; hashs--)
        {
            printf("#");

        }
        printf("\n");
    }
}
