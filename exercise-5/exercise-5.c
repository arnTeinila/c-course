#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int multiply_matrix(int vector[3], int matrix[3][3]);

int main (void){
	int vector[3];
	int matrix[3][3];
	
	printf("Enter intitial values for the vector:\n");
	

	for(int i=0;i<3;i++){
		printf("Value [%d]:\n",i);
		scanf("%d",&vector[i]);
	}

	printf("Enter initial values for the matrix:\n");
	for (int j=0;j<3;j++){
		for(int k=0;k<3;k++){
			printf("Value [%d][%d]:\n",j,k);
			scanf("%d",&matrix[j][k]);
		}
	}
	
	printf("Vector elements:\n");
	for(int i=0;i<3;i++){
		printf("%d\n",vector[i]);
	}
	printf("Matrix elements:\n");
   	
	for(int i=0; i<3; i++) {
      		for(int j=0;j<3;j++) {
        		printf("%d ", matrix[i][j]);
         		if(j==2){
            			printf("\n");
         		}
      		}
   	}

	multiply_matrix(vector,matrix);



}

void multiply_matrix(int vector[3], int matrix[3][3],int result [3]) {
   	for (int i=0;i<3;++i) {
      		for (int j=0;j<3;++j) {
         		result[i][j] = 0;
      		}
   	}

   	for (int i=0;i<3;++i) {
      		for (int j=0;j<3;++j) {
      		
		}
   	}
}

