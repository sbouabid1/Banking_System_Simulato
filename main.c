#include "libft.h"
#include <string.h>

int main()
{
	int opt;
	int count = 0;
	int login_return;
	New_Clents *cleant = malloc(sizeof(New_Clents) * 5);

	system("clear");
	printf("\n\033[1;35m \tWeclome to Alex Bank .\033[0m\n\n");
	do{
		printf("count %d \n",count);
		printf("1#.Creat account\n");
		printf("2#.Login\n");
		printf("0#.Exit\n\n");
		printf("Enter option : ");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				creat_account(cleant,&count);
				break;
			case 2: 
				login_return = login(cleant,&count);
				if(login_return >= 0)
					get_info(&cleant[login_return]);
				else{
					printf("\033[0;31m\n\nThis information is Wrong try agin\033[0m\n");
					getchar();
					getchar();
				}
				break;
		}	
		system("clear");
		printf("\n\033[1;35m \tWeclome to Alex Bank .\033[0m\n\n");
	}while(opt != 0);
}