#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int view_health_records() {
	FILE *fp;
	struct Health s;
    
    	fp = fopen("health_records.txt", "r");
    	
    	if (fp == NULL){
    		printf("File opening error!");
    		return main();
    	}
    	
	printf("TG_No\t\tIllnesses\n");

	while (fscanf(fp, "%s\t\t%49[^\n]\n", s.tg_no, s.illness) == 2) {
		printf("%s\t%s\n", s.tg_no, s.illness);
	}
	
	fclose(fp);
	
	char choise;
	
	printf("\n\nDo you want to return to the main menu(Y or y): ");
        	scanf(" %c", &choise);
	
	if (choise == 'Y' || choise == 'y'){
		return health_records();
	}
	return 0;
}