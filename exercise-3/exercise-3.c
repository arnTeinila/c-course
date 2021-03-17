#include <stdio.h>
#include <string.h>
#include <stdlib.h>


float calculate_average(int students, int scores_array[]);          


void main() {
        int number_of_students;
        int input;
        int i = 0;
        
        printf("How many students are to be graded?\n");
        scanf("%d",&number_of_students);
        
        int students_array[number_of_students];
        
        for(int i=0;i<number_of_students;i++){
                students_array[i]=0;
        }                
                 
        while(i<number_of_students){                  
                printf("Enter a grade for student %d [0-5]\n",i+45000);
                                          
                scanf("%d",&input); 
                
                if(input>=0 && input<=5){
                        students_array[i]=input;        
                        i++;
                } else {
                        printf("Enter a valid number [0-5].\n");
                }
        }
        
        
        printf("Average course grade: %.2f\n",calculate_average(number_of_students,students_array));
}
 

float calculate_average(int students, int scores_array[]) {          
        float average;                    
        int sum = 0;;
        
        for(int i=0;i<students;i++){
                sum = sum + scores_array[i];
        }
        average = sum/(float)students;
        
        return average; 
}

