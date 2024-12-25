#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int Students_arrive_at_the_hostel() {
	FILE *fp1, *fp2;
	struct Student s;
	struct Register e;
	
	int error;
	char tg_no[20];
	int day, month, year, hour, minute;

	fp1 = fopen("out_register.txt", "r");
    
	if (fp1 == NULL) {
		printf("Error opening File!.\n");
		return main();
	}
	
	fp2 = fopen("in_register.txt", "a");
    
	if (fp2 == NULL) {
		printf("Error opening File!.\n");
		return main();
	}


	printf("Enter TG No: ");
	scanf("%s", tg_no);
	
	while (fscanf(fp1, "%02d-%02d-%04d | %s | %49[^|] | %d | %d | %d | %02d:%02d\n", &e.day, &e.month, &e.year, e.tg_no, e.name, &e.room_no, &e.contact_no, &e.parents_cont_no, &e.hour, &e.minute) == 10){
		
		if (strcasecmp(e.tg_no, tg_no) == 0){
			
			printf("Enter arrival date: ");
			scanf("%d %d %d", &day, &month, &year);
		    
			printf("Enter arrival time: ");
			scanf("%d %d", &hour, &minute);
			
			fprintf(fp2, "%02d-%02d-%04d | %s | %s | %d | %d | %d | %02d:%02d | %02d-%02d-%04d | %02d:%02d\n", e.day, e.month, e.year, e.tg_no, e.name, e.room_no, e.contact_no, e.parents_cont_no, e.hour, e.minute, day, month, year, hour, minute);
			
			error = 0;
		
		}
		
	}
	
	if (error != 0){
		fclose(fp1);
		fclose(fp2);
		printf("\nStudent not found!\nData Enter Failure!\n");
		
		
	}else{
		fclose(fp1);
		fclose(fp2);
		printf("\nData Enter Successful!\n");
	}
	
	char choise;
	
		printf("\nDo you want continue(Y or N)?");
			scanf(" %c", &choise);
		
		if (choise == 'Y' || choise == 'y'){
			return Students_arrive_at_the_hostel();
		}else if (choise == 'N' || choise == 'n'){
			return student_in_out();
		}
		return 0;
}