#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int search_students() {
	FILE *fp;
	struct Student s;
	
	int error;

	fp = fopen("students.txt", "r");

	printf("\n\nEnter search tg no: ");
	char find[50];
	scanf(" %49[^\n]", find);

	while(fscanf(fp, "%s | %49[^|] | %d | %d | %d | %49[^\n]\n", s.tg_no, s.name, &s.room_no, &s.contact_no, &s.parents_cont_no, s.email) == 6) {
		if(strcasecmp(s.tg_no, find) == 0) {
			printf("\tTG No: %s\n\tName: %s\n\tRoom No: %d\n\tContact No: %d\n\tParents Contact No: %d\n\tEmail: %s\n", s.tg_no, s.name, s.room_no, s.contact_no, s.parents_cont_no, s.email);
			error = 0;
		}
	}

	fclose(fp);
	
	if (error != 0){
		printf("\nStudent not found!\n");
		return edit_student();
	}
	
	
	char choise;
	
	printf("\nDo you want continue(Y or N)?");
        	scanf(" %c", &choise);
	
	if (choise == 'Y' || choise == 'y'){
		return search_students();
	}else if (choise == 'N' || choise == 'n'){
		return main();
	}
	
	return 0;
}