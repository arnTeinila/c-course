#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	FILE *fp;
	int nro_lines,line;
	int lc = 1;
	int total = 0;
	
	fp = fopen("numbers.file", "r");
	
	if(fp == NULL) {
		printf("Unable to open the file");
	} else {
		fscanf(fp,"%d",&line);
		nro_lines = line;
		printf("Number of lines to be read: (%d)\n",nro_lines);
		
		while(lc < nro_lines) {
			if(fscanf(fp,"%d",&line)==EOF){
				lc--;
				printf("Error! Tried to read %d numbers, %d numbers were read.\n",nro_lines,lc);
				break;
			}else{
				printf("reading line number: (%d), number is: (%d)\n",lc,line);
				total+=line;
			}
		}
	}
	printf("lines %d total %d\n",lc,total);
	printf("Average of %d numbers is: %.2f\n",lc,(total/(float)lc));
	fclose(fp);
	
	return 0;

}
