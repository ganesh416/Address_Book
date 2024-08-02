#include "main.h"


void search_contact()
{
    printf("\n------------- SEARCH CONTACT --------\n");
   
	char name[50] = {0},mailid[50],location[50],number[11];

   char *a_book[5] ={name, number, mailid, location,NULL};
   char *prompt[] = {"Name", "Number", "Gmailid", "Location",NULL};

	int ch = 0, ret;
	int long f_fp;
	//printf("Enter the %s: ",prompt[ch-1]);
	while(1)
	{
        printf("1).Name\n2).number\n3).Gmailid\n4).Location\n5).Exit\nSelect your choice: ");
	    scanf("%d", &ch);
		if(ch == 5)
			return;
	    printf("Enter the %s: ",prompt[ch-1]);
		ret = 1;
		while(ret)
		{
	  		 __fpurge(stdin);
	   		scanf("%[^\n]", a_book[ch-1]);
       		if(ret = check_name(a_book[ch-1], &f_fp, 1) == 1)
	   		{
		   		printf("The given %s not found, please try again :  ", prompt[ch-1]);

	   		}
		}

		printf("--------------- WE ARE IN SEARCH MODE ------------\n");
	}
  
	
}
