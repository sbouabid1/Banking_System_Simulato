#include "libft.h"

int login(New_Clents **cleant, int *count)
{
	system("clear");
	printf("\033[0;32mLogin \033[0m\n\n\n");
	char email[30];
	char password[30];
	printf("Enter your Email : ");
	scanf("%s",email);
	printf("Enter your password : ");
	scanf("%s",password);
	int i = 0;
	while(i < *count){
		if(strcmp(email,cleant[i]->email) == 0){
			if(strcmp(password,cleant[i]->password) == 0){
				printf("\033[0;32m\n\nlogin Successful\033[0m\n\n");
				return i;
			}
			else
				printf("\033[0;31m\n\nWrong password\033[0m\n");
			break;
		}
		i++;
	}
	if(cleant[i] == NULL)
		printf("\033[0;31m\n\nWrong email\033[0m\n");
	printf("\n\n");
	return 0;
}