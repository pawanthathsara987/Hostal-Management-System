#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int add_health_records() {

	FILE *fp;
	struct Health s;
    
    	fp = fopen("health_records.txt", "a");
    	
    	if (fp == NULL){
    		printf("File opening error!");
    		return main();
    	}
    	
	printf("Enter student TG No: ");
	scanf("%s", s.tg_no);
	printf("Mention any long-term illnesses a student may have: ");
	scanf(" %49[^\n]", s.illness);
    
	fprintf(fp, "%s\t\t%s\n", s.tg_no, s.illness);
	
	fclose(fp);
	
	char choise;
	
	printf("\nDo you want continue(Y or N)?");
        	scanf(" %c", &choise);
	
	if (choise == 'Y' || choise == 'y'){
		return add_health_records();
	}else if (choise == 'N' || choise == 'n'){
		return health_records();
	}
	
	return 0;
}
