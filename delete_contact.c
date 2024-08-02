#include "main.h"
extern int ind;
void delete_contact()
{
	
	printf("\n------------- DELETE CONTACT --------\n");
   
   char name[50] = {0},mailid[50],location[50],number[11];
   long int f_fp = 0;
   int ch, opt, i = 0, ret ;
   ind = 0;
   char *a_book[5] ={name, number, mailid, location,NULL};
   char *prompt[] = {"Name", "Number", "Gmailid", "Location",NULL};
   while(1)
   {
        printf("1).Name\n2).number\n3).Gmailid\n4).Location\n5).Exit\nSelect your choice: ");
        scanf("%d", &ch);
		if(ch == 5)
			return;
        printf("Enter the %s:  ",prompt[ch-1]);
        ret = 1;
		while(ret)
		{
           __fpurge(stdin);
            scanf("%[^\n]", a_book[ch-1]);

            ret =  check_name(a_book[ch-1], &f_fp, 1);
	 
	        if(ret != 1)
	        {
              printf("Please Select which one you want to delete? : ");
              scanf("%d", &opt);
              delete_contact_details(s1[opt-1].name);
	        }
	        else
		         printf("%s not found, please try again:  ", prompt[ch-1]);
		}

		printf("-----------------------WE ARE IN DELETE MODE ----------------------\n");
   }
	  
 
}
