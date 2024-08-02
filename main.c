/*
Name: Ganesh pyndla
Date:02-08-2024
Description: Address Book
*/

#include "main.h"
int main()
{
	system("clear");

	//printf("1).Add contact\n2).Edit\n3).Search\n4).Delete\n5).Print\n6).Exit\n");
	printf("\n--------------- USER MENU ---------------\n");
	char opt;
	do
	{
	   //printf("\n--------------- User Menu ---------------\n");
	   printf("1).Add contact\n2).Edit\n3).Search\n4).Delete\n5).Print\n6).Exit\n");
	   int ch;
       printf("Select your choice : ");
	   scanf("%d", &ch);
	   switch(ch)
	   {
		   case 1:
			   add_contact();
			   opt = 1;
			   break;
		   case 2:
			   edit_contact();
			   opt = 1;
			   break;
		   case 3:
			   search_contact();
			   opt = 1;
			   break;
		   case 4:
			   delete_contact();
			   opt = 1;
               break;
		   case 5:
			   print_contacts();
			   opt = 1;
			   break;
		   case 6:
               opt = 0;
			   break;

	   }
	   if(opt == 1)
		   printf("\n---------- WE ARE IN USER MENU --------------------\n\n");
	}while(opt);
}
