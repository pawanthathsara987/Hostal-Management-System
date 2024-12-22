#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int edit_student() {
    FILE *fp, *fp2;
    struct Student s;
    int count = 0;
    int room_no, contact_no, parents_cont_no;
    char name[50], email[50], tg_no[20];

    fp = fopen("students.txt", "r");
    fp2 = fopen("temp.txt", "w");

    if (fp == NULL || fp2 == NULL) {
        printf("Error opening file!\n");
        return main();
    }

    printf("\nEnter TG no (e.g. TG/2022/1111): ");
    scanf("%s", tg_no);

    printf("Enter new name: ");
    scanf(" %49[^\n]", name);

    printf("Enter new room no: ");
    scanf("%d", &room_no);

    printf("Enter new contact no: ");
    scanf("%d", &contact_no);

    printf("Enter new parents contact no: ");
    scanf("%d", &parents_cont_no);

    printf("Enter new email: ");
    scanf(" %49[^\n]", email);


    rewind(fp);
    while (fscanf(fp, "%s | %49[^|] | %d | %d | %d | %49[^\n]\n", s.tg_no, s.name, &s.room_no, &s.contact_no, &s.parents_cont_no, s.email) == 6) {
    	if (strcasecmp(s.tg_no, tg_no) == 0 && s.room_no == room_no){
    		break;
    	}
        if (s.room_no == room_no) {
            count++;
        }
    }
    

    if (count >= 4) {
        printf("\n\nThe room is full of members!\n");
        fclose(fp);
        fclose(fp2);
        return edit_student();
    }


    rewind(fp);


    while (fscanf(fp, "%s | %49[^|] | %d | %d | %d | %49[^\n]\n", s.tg_no, s.name, &s.room_no, &s.contact_no, &s.parents_cont_no, s.email) == 6) {
        if (strcasecmp(s.tg_no, tg_no) == 0) {
            strcpy(s.name, name);
            s.room_no = room_no;
            s.contact_no = contact_no;
            s.parents_cont_no = parents_cont_no;
            strcpy(s.email, email);
        }

        fprintf(fp2, "%s | %s | %d | %d | %d | %s\n", s.tg_no, s.name, s.room_no, s.contact_no, s.parents_cont_no, s.email);
    }

    fclose(fp);
    fclose(fp2);


    remove("students.txt");
    rename("temp.txt", "students.txt");

    printf("\n\nData entry is successful!\n");
    
    	char choise;
	
	printf("\nDo you want continue(Y or N)?");
        	scanf(" %c", &choise);
	
	if (choise == 'Y' || choise == 'y'){
		return edit_student();
	}else if (choise == 'N' || choise == 'n'){
		return main();
	}
	
	return 0;
}