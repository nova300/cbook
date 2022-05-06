#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ...., 300; Floating-point version */

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;      /* lower limit of temperature table */
    upper = 200;    /* upper limit */
    step = 10;      /* step size */

    printf(" C\tF\n");
    celsius = lower;
    while (celsius <= upper){
        fahr = (celsius * (9.0 / 5.0) + 32.0);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}