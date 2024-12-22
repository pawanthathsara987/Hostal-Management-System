#ifndef FUNC_H
#define FUNC_H

int add_health_records();
int add_student();
int delete_student();
int edit_student();
int enter_less_facilities();
int health_records();
int main_menu();
int main();
int search_students();
int show_less_facilities();
int student_in_out();
int Students_arrive_at_the_hostel();
int Students_move_out_of_the_hostel();
int update_and_show_available_rooms();
int view_health_records();
int view_students();


struct Student {
	char tg_no[20];
	char name[50];
	int room_no;
	int contact_no;
	int parents_cont_no;
	char email[50];
};

struct Room {
	int room_no;
	char room_type[20];
};

struct Health {
	char tg_no[20];
	char illness[150];
};

struct Register{
	int day, month, year, hour, minute;
	char tg_no[20];
	char name[50];
	int room_no;
	int contact_no;
	int parents_cont_no;
};


#endif // FUNC_H