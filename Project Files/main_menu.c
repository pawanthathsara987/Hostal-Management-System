#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

int main();
int health_records();
int student_in_out();
int main_menu(){

	int opt;	
	
	while(1){
		printf("\nEnter option: ");
		scanf("%d", &opt);
	       
		switch(opt) {
			case 1:
				add_student();
				break;
			case 2:
				view_students();
				break;
			case 3:
				delete_student();
				break;
			case 4:
				edit_student();
				break;
			case 5:
				search_students();
				break;
			case 6:
				update_and_show_available_rooms();
				break;
		       	case 7:
				enter_less_facilities();
				break;
			case 8:
				show_less_facilities();
				break;
			case 9:
				health_records();
				break;
			case 10:
				student_in_out();
				break;
			case 11:
				return 0;
			default:
				printf("\nInvalid option!\n");
				return main();
		}
		return 0;
	}
}