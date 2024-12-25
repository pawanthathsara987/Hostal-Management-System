#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int show_less_facilities() {
	FILE *fp;
	char line[256];

	fp = fopen("less_facilities.txt", "r");

	if(fp == NULL) {
		printf("\n\nNo data available!\n");
		return main();
	}

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