#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int Students_move_out_of_the_hostel() {
	FILE *fp1, *fp2;
	struct Student s;

	char tg_no[20];
	char name[50];
	int day, month, year, hour, minute;

	fp1 = fopen("students.txt", "r");

	if (fp1 == NULL) {
		printf("Error opening File!.\n");
		return main();
	}

	fp2 = fopen("out_register.txt", "a");

	if (fp2 == NULL) {
		printf("Error opening File!\n");
		return main();
	}

	printf("Enter TG No: ");
	scanf("%s", tg_no);

	while (fscanf(fp1, "%s | %49[^|] | %d | %d | %d | %49[^\n]\n", s.tg_no, s.name, &s.room_no, &s.contact_no, &s.parents_cont_no, s.email) == 6) {
		if (strcasecmp(s.tg_no, tg_no) == 0) {
		
			printf("Enter leaving date: ");
			scanf("%d %d %d", &day, &month, &year);
			    
			printf("Enter leaving time: ");
			scanf("%d %d", &hour, &minute);

			fprintf(fp2, "%02d-%02d-%04d | %s | %s | %d | %d | %d | %02d:%02d\n",day, month, year, s.tg_no, s.name, s.room_no, s.contact_no, s.parents_cont_no, hour, minute);
			printf("\nData entry is successful!\n");
			fclose(fp1);
			fclose(fp2);
			
			char choise;
	
			printf("\nDo you want continue(Y or N)?");
				scanf(" %c", &choise);
			
			if (choise == 'Y' || choise == 'y'){
				return Students_move_out_of_the_hostel();
			}else if (choise == 'N' || choise == 'n'){
				return student_in_out();
			}
			return 0;
	
		}
	}

	printf("\nStudent not found!\n");
	fclose(fp1);
	fclose(fp2);
	
	char choise;
	
	printf("\nDo you want continue(Y or N)?");
		scanf(" %c", &choise);
	
	if (choise == 'Y' || choise == 'y'){
		return Students_move_out_of_the_hostel();
	}else if (choise == 'N' || choise == 'n'){
		return student_in_out();
	}
}
