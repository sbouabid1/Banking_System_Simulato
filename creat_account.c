#include "libft.h"

void creat_account(New_Clents *cleant, int *count)
{
	system("clear");
	printf("\033[0;32mYou can creat your account here . \033[0m\n\n\n");
	printf("Enter your email : ");
	scanf("%s",cleant->email);
	printf("Enter your first name : ");
	scanf("%s",cleant->Fname);
	printf("Enter your last name : ");
	scanf("%s",cleant->Lname);
	printf("Enter new password : ");
	scanf("%s",cleant->password);
	printf("Enter your age : ");
	scanf("%d",&cleant->age);
	printf("Enter your phone number : ");
	scanf("%d",&cleant->phone_number);
	*count+= 1;
	getchar();
	printf("\n\n\033[0;32mCongratulations now you have account in bank\033[0m\n\n");
	getchar();
}