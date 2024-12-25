#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int view_students() {
	FILE *fp;
	struct Student s;

	fp = fopen("students.txt", "r");
	
	if (fp == NULL) {
		printf("Error opening file!\n");
		return main();
	}

	printf("TG No\t\tName\t\tRoom No\tContact No\tParent's No\tEmail\n\n");

	while(fscanf(fp, "%19s | %49[^|] | %d | %d | %d | %49[^\n]\n", s.tg_no, s.name, &s.room_no, &s.contact_no, &s.parents_cont_no, s.email) == 6) {
		printf("%s\t%s\t%d\t%d\t%d\t%s\n\n", s.tg_no, s.name, s.room_no, s.contact_no, s.parents_cont_no, s.email);
	}

	fclose(fp);
	
	char choise;
	
	printf("\n\nDo you want to return to the main menu(Y or y): ");
        	scanf(" %c", &choise);
	
	if (choise == 'Y' || choise == 'y'){
		return main();
	}
	return 0;
}