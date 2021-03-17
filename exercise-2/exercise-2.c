#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
        float array[12];
        float total = 0.0;
	float input;

        printf("Enter yearly gross income:\n");
        scanf("%f",&input);  
	for(int i=0;i<12;i++){
                array[i]=input;
        }


        for(int i=0;i<6;i++){
            printf("element[%2d] = %11.4f\n",i,array[i]/12.5);
            total = total + (array[i]/12.5);
        }
        
        printf("element[ 6] = %11.4f\n",(array[6]/12.5) * 1.5);
        total = total + ((array[6]/12.5) * 1.5);
        
        for(int i=7;i<12;i++){
            printf("element[%2d] = %11.4f\n",i,array[i]/12.5);
            total = total + (array[i]/12.5);
        }
        
	printf("\ntotal       = %11.4f\n",total);
        
        
        return 0;
}
