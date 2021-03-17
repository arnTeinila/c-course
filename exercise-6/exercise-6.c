#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void caesar_cipher(char text[],int shift);

int main (void){
	char text[50];
	int shift;

  	printf("Enter text to be encrypted:\n");
  	scanf("%s", text);
  	printf("Enter the amount of shift:\n");
  	scanf("%d", &shift);

  	caesar_cipher(text,shift);
}

void caesar_cipher(char text[],int shift) {
  	for(int i=0; text[i] != ' '; i++)
    		text[i] = 65 + (text[i]-65+shift)%26;
  		printf("Encrypted text: %s\n",text);
	
}
