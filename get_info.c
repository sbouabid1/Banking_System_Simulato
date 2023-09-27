#include "libft.h"

void get_info(New_Clents *cleant)
{
	system("clear");
	printf("\033[0;32mYour information : \033[0m");
	printf("Full Name : %s %s\n",cleant->Fname,cleant->Lname);
	printf("age : %d\n",cleant->age);
	printf("number : %d\n",cleant->phone_number);
	printf("email : %s\n",cleant->email);
	getchar();
}