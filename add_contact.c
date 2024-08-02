#include "main.h"


void add_contact()
{
	printf("\n---------- Add CONTACT MODE SELECTED ------------\n\n");
    
    FILE* fp = fopen("input.csv", "a+");
 
    char name[50],mailid[50],location[50];
    char number[11], save;
 
    if (!fp) {
        // Error in file opening
        printf("Can't open file\n");
        return ;
    }
 
    // Asking user input for the
    // new record to be added
	int ret = 1;
	long int f_fp;
    printf("Enter New contract Name: ");
	while(ret)
	{
      __fpurge(stdin);
	   scanf("%[^\n]", name);
	   if(ret = check_name(name, &f_fp,0) == 1)
	   {
		   printf("Given name already present in address book please try with different name\nEnter the name: ");
	   }
	}
	ret = 1;
    printf("Enter Phone Number:  ");
    while(ret)
	{
     
       scanf("%s", number);
	   ret = check_phone_number(number);
	   if(ret == 0)
	   {
		  if(ret = check_name(number,&f_fp,0) == 1)
		   printf("Given number already present in address book please try with different number\nEnter the number: ");

	   }

    }
    ret = 1;
    printf("Enter Gmail id: ");
	while(ret)
	{
        
        scanf("%s",mailid);
		ret = check_mailid(mailid);
	}
	printf("\nEnter Location: ");
	scanf("%s", location);
 
	printf("\nSave this contact? press [Y/y] to save:  ");
	scanf(" %c", &save);
    if(save == 'Y' || save == 'y')
	{
		fprintf(fp, "%s,%s,%s,%s,\n", name,number, mailid,location);
		printf("Add Contact Successfull\n");
	}
	else
		printf("Add Contact Failed\n");

 
 
    fclose(fp);
    return;
}
