#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int enter_less_facilities() {
	FILE *fp;
	char room_no[10];
	char facilities[100];

	fp = fopen("less_facilities.txt", "w");

	if (fp == NULL) {
		printf("Error opening file!\n");
		return main();
	}

	printf("\n\nEnter less facilities (enter 'stop' to finish):\n");

	while(1) {
		printf("Room no: ");
		scanf("%9s", room_no);

		if(strcasecmp(room_no, "stop") == 0) {
			break;
		}

		int c;
		while ((c = getchar()) != '\n' && c != EOF);

		printf("less facilities: ");
		fgets(facilities, sizeof(facilities), stdin);


		facilities[strcspn(facilities, "\n")] = 0;

		fprintf(fp, "Room no: %s\t\t\tLess facilities: %s\n", room_no, facilities);
	}

	fclose(fp);
	
	char choise;
	
	printf("\nDo you want continue(Y or N)?");
        	scanf(" %c", &choise);
	
	if (choise == 'Y' || choise == 'y'){
		return enter_less_facilities();
	}else if (choise == 'N' || choise == 'n'){
		return main();
	}
	
	return 0;
}