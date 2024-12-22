#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int student_in_out(){
	int choise;
	
	printf("\n[1]. Marking of leaving of students at the hostel\n[2]. Marking of arrival of students at the hostel\n[3]. Exit\n");
	
	printf("\nEnter option: ");
	scanf("%d", &choise);
		
	switch(choise){
		case 1:
			Students_move_out_of_the_hostel();
			break;
		case 2:
			Students_arrive_at_the_hostel();
			break;
		case 3:
			return main();
		default:
			printf("\nInvalid option!\n");
			break;
	}
	{
		char choise;
		
		printf("\nDo you want continue(Y or N)?");
			scanf(" %c", &choise);
		
		if (choise == 'Y' || choise == 'y'){
			return student_in_out();
		}else if (choise == 'N' || choise == 'n'){
			return main();
		}
		return 0;
	
	}
	
	
}