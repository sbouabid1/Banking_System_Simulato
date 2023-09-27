#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Clent{
	char email[30];
	char Fname[30];
	char Lname[30];
	char password[30];
	int age;
	int phone_number;
} New_Clents;

void creat_account(New_Clents *cleant, int *count);
void get_info(New_Clents *cleant);
int login(New_Clents *cleant, int *count);

#endif