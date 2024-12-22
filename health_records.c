#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int health_records() {    
	int option;
	char choise;
	
	do {
		printf("\n1. Add student illness\n2. View student illness\n3. Exit\n");
		printf("Enter option: ");
		scanf("%d", &option);
        
		switch(option) {
		case 1:
			add_health_records();
			break;
		case 2:
			view_health_records();
			break;
		case 3:
			return main();
		default:
			printf("Invalid option!\n");
        	}
        	
        	printf("\nDo you want continue(Y or N)?");
        	scanf(" %c", &choise);
        	
	} while (choise == 'Y' || choise == 'y');
	if (choise == 'N' || choise == 'n'){
		return main();
	}
	return 0;
}