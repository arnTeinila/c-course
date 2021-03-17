#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int sum = 0;  
    int i = 0;
        
    double input;

    printf("Enter positive numbers. 0 terminates the program.\n");

    while(scanf("%lf",&input) != 0) {
        if(input > 0) { 
            sum = sum + input;
            i++;
        } else if(input < 0) {  
            printf("Enter a positive number, or 0 to terminate.\n");
        } else {
            break;
        } 
    }
    printf("Average of positive numbers: %.2f\n",sum/(float)i);    
    
    return 0;
}
