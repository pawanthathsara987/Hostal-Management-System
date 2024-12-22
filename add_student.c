#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int add_student() {
	FILE *fp;
	struct Student s;
	
	int count = 0;
	
	int room_no, contact_no, parents_cont_no;
	
	char tg_no[20], name[50], email[50];

	printf("\nEnter TG no (e.g. TG/2022/1111): ");
	scanf("%s", tg_no);

	printf("Enter name (As in lms): ");
	scanf(" %49[^\n]", name);

	printf("Enter room no: ");
	scanf("%d", &room_no);
	
	printf("Enter contact no: ");
	scanf("%d", &contact_no);

	printf("Enter parents contact no: ");
	scanf("%d", &parents_cont_no);

	printf("Enter email: ");
	scanf(" %49[^\n]", email);
	
	
	fp = fopen("students.txt", "r");
	
	if (fp == NULL) {
		printf("\n\nError opening file!\n");
		return main();
	}

	while (fscanf(fp, "%s | %49[^|] | %d | %d | %d | %49[^\n]\n", s.tg_no, s.name, &s.room_no, &s.contact_no, &s.parents_cont_no, s.email) == 6) {
		if (s.room_no == room_no) {
			count += 1;
		}
		
		if(strcmp(s.tg_no, tg_no) == 0){
			printf("\n\nThere is already a student with this TG No!\n");
			return add_student();
		}else if(strcmp(s.email, email) == 0){
			printf("\n\nThare is already an email like this!\n");
			return add_student();
		}else if(s.contact_no == contact_no){
			printf("\n\nThare is already a phone number like this student's phone no!\n");
			return add_student();
		}
	}
	fclose(fp);

	if (count >= 4) {
		printf("\n\nThe room is full of members!\n");
		return add_student();
	}
	
	fp = fopen("students.txt", "a");
	if (fp == NULL) {
		printf("\n\nError opening file!\n");
		return add_student();
	}
	
	strcpy(s.tg_no, tg_no);
	strcpy(s.name, name);
	s.room_no = room_no;
	s.contact_no = contact_no;
	s.parents_cont_no = parents_cont_no;
	strcpy(s.email, email);

	fprintf(fp, "%s | %s | %d | %d | %d | %s\n", s.tg_no, s.name, s.room_no, s.contact_no, s.parents_cont_no, s.email);
    
	printf("\n\nData entry is successful!\n");

	fclose(fp);
	
	char choise;
	
	printf("\nDo you want continue(Y or N)?");
        	scanf(" %c", &choise);
	
	if (choise == 'Y' || choise == 'y'){
		return add_student();
	}else if (choise == 'N' || choise == 'n'){
		return main();
	}
	
	return 0;
}
