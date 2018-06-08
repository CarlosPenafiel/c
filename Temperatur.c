/*
 * Temperatur-Berechnung
 * Carlos Peñafiel
 * 
 */

#include <stdio.h>

int main()
{
    float Celsius ;
    float Fahrenheit = 0 ;
    printf("Fahrenheit  Celsius\n");
    while ( Fahrenheit <= 300 )
    {
        Celsius = (Fahrenheit - 32)*5/9;
        printf("   %4.0f      %3.0f\n", Fahrenheit, Celsius);
        Fahrenheit = Fahrenheit + 20 ;
    }

    return 0 ;
}