#include "main.h"


void edit_contact()
{

    printf("-----------------  EDIT MODE SELECTED  --------------------\n");
	char name[50],mailid[50],location[50],number[11];
	char n_name[50],n_mailid[50],n_location[50], n_number[11];
	char *old[5] = {name,number,mailid,location,NULL};
	char *new[5] = {n_name,n_number,n_mailid,n_location,NULL};
	char *prompt[5] = {"Name","Number","Gmailid","Location",NULL};

	while(1)
	{
		 printf("1).Name\n2).Mobile number\n3).Gmail\n4).Location\n5).Exit\nSelect your choice : ");
         int ch, ret = 1,opt = 0;
		 long int f_fp;
		 scanf("%d", &ch);
		 if(ch == 5)
		 {
			 return;
		 }
		 printf("Enter the %s: ", prompt[ch-1]);
		 while(ret)
		 {
			 __fpurge(stdin);
			 scanf("%[^\n]", old[ch-1]);
             ret =  check_name(old[ch-1], &f_fp, 1);
			 if(ret != 1)
	        {
              printf("Please Select which one you want to edit? : ");
              scanf("%d", &opt);
			  __fpurge(stdin);
			  printf("Please Enter the new %s: ",prompt[ch-1]);
			  scanf("%[^\n]", new[ch-1]);
              edit_contact_details(s1[opt-1].name,old[ch-1],new[ch-1]);
	        }
	        else
		         printf("%s not found, please try again:  ", prompt[ch-1]);

		 }

		printf("\n------------------  WE ARE IN EDIT MODED ------------------\n");
	}
}
