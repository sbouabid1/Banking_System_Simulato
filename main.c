#include "libft.h"
#include <string.h>

int main()
{
	system("pause");
	int count = 0;
	New_Clents *cleant = malloc(sizeof(New_Clents) * 100);
	creat_account(&cleant[count],&count);
	int login_return = login(&cleant,&count);
	if(login_return == 1)
		get_info(&cleant[login_return]);
	
}