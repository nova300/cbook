#include <stdio.h>
#include <math.h>
#include <time.h>

void delay(int ms){
    clock_t start_time = clock();
    while (clock() < start_time + ms){
    }
}

int main(){

    float x = 1.0;
    int y;
    int n;
    
    while(x <= 10000){
        n = 0;
        y = 38 + 38 * sin(x);
        printf("y=%d\n", y);
        while(n < y){
            printf(" ");
            n++;
        }
        x = x + 0.2;
        delay(10);
    }
}