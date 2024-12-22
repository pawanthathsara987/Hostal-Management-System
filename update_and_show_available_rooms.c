#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int update_and_show_available_rooms() {

	FILE *fp, *fp2;
	struct Student s;
	
	int rooms[24] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124};
	int i, count = 0;
	char line[256];
	int available_space = 0;

	fp = fopen("students.txt", "r");
	fp2 = fopen("temp.txt", "a");
	
	if (fp == NULL || fp2 == NULL){
		printf("Error opening file!\n");
        	return main();
	}
	
	printf("Room No\t\tAvailable space\n\n");
	for(i = 0; i < 24; i++) {
		count = 0;//rest count
	
		while(fscanf(fp, "%s | %49[^|] | %d | %d | %d | %49[^\n]\n", s.tg_no, s.name, &s.room_no, &s.contact_no, &s.parents_cont_no, s.email) == 6) {
			
			if (rooms[i] == s.room_no){
				count++;
			}
		}
		
		if (count < 4){
			available_space = 4 - count;
			fprintf(fp2, "%d\t\t%d\n", rooms[i], available_space);
		}else if(count == 4){
			fprintf(fp2, "%d\t\t%s\n", rooms[i], "full");
		}
		
		 rewind(fp);
	}

	fclose(fp);
	fclose(fp2);
	remove("available_rooms.txt");
	rename("temp.txt", "available_rooms.txt");

	fp = fopen("available_rooms.txt", "r");

	while(fgets(line, sizeof(line), fp)) {
		printf("%s", line);
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