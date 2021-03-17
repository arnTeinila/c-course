#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
        int hours, minutes, sleep_hours, sleep_minutes, new_hours, new_minutes;
        
	while(1){
                printf("Enter current time (hh:mm):\n");
                scanf("%02d:%02d",&hours,&minutes);

                if(hours>=0 && hours<=23 && minutes>=0 && minutes<=59) {
                        break;
                } else { continue; }
        }

        while(1){ 
                printf("How long do you want to sleep?\n");
                scanf("%02d:%02d",&sleep_hours, &sleep_minutes);
        
		if(sleep_hours>=0 && sleep_hours<=23 && sleep_minutes>=0 && sleep_minutes<=59) {
                        break;
                } else { continue; }
	}

	new_minutes = (minutes+sleep_minutes)%60;
	new_hours = ((hours+sleep_hours)%24)+((minutes+sleep_minutes)/60);
        printf("If you go to bed now you must wake up at %d:%02d.\n",new_hours,new_minutes);

}
