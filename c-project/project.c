#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void add_loan();
void list_loans();
void remove_loan();
void remove_all();
void information();

int main(void){
	
	while(1){
                printf("Choose an option [1-5]:\n");
                printf("1: Add a new loan and calculate the amortization.\n");
                printf("2: List all loans.\n");
                printf("3: Remove a loan.\n");
                printf("4: Clear all loans.\n");
                printf("5: Show information about the application.\n"); 
		printf("6: Quit the program.\n");

                int option;
                scanf("%d",&option);

                char input[MAX_LEN];

                if(option==1){
                        add_loan();
		}else if(option==2){
                	list_loans();
		}else if(option==3){
                	remove_loan();
		}else if(option==4){
			remove_all();
		}else if(option==5){
                        information();
                }else if(option==6){
			printf("Quitting program.\n");
			break;
                }else{
                        printf("Invalid option, try again.\n");
                }
        }
}

void add_loan(){
        printf("Adding a loan.\n");
}

void list_loans(){
        printf("Listing all loans.\n");
}

void remove_loan(){
        printf("Removing a loan.\n");
}

void remove_all(){
	printf("Removing all loans.\n");
}

void information(){
	printf("Showing information about the application.\n");
}
