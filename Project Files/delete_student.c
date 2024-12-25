#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int delete_student() {
	FILE *fp, *fp2;
	struct Student s;
	int error;

	fp = fopen("students.txt", "r");
	fp2 = fopen("temp.txt", "a");

	printf("\n\nEnter TG no (e.g. TG/2022/1111): ");
	
	char tg_no[20];
	scanf("%s", tg_no);
    

	while(fscanf(fp, "%s | %49[^|] | %d | %d | %d | %49[^\n]\n", s.tg_no, s.name, &s.room_no, &s.contact_no, &s.parents_cont_no, s.email) == 6) {
        
		if(strcasecmp(s.tg_no, tg_no) != 0) {
			fprintf(fp2, "%s | %s | %d | %d | %d | %s\n", s.tg_no, s.name, s.room_no, s.contact_no, s.parents_cont_no, s.email);
            
		}else if(strcasecmp(s.tg_no, tg_no) == 0){
		       	error = 0;
		}
	}
    
	if(error == 0){
		printf("\n\nDelete successful!\n");
		
	}else{
		printf("\n\nDelete unsuccessful!\nCheck TG_NO!\n\n");
		return main();
	}

	fclose(fp);
	fclose(fp2);

	remove("students.txt");
	rename("temp.txt", "students.txt");
	
	
	char choise;
	
	printf("\nDo you want continue(Y or N)?");
        	scanf(" %c", &choise);
	
	if (choise == 'Y' || choise == 'y'){
		return delete_student();
	}else if (choise == 'N' || choise == 'n'){
		return main();
	}
	
	return 0;
}