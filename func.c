/*
Name: Ganesh pyndla
Date: 02-08-2024
Description: Address Book
*/

#include "main.h"

FILE *fp;
int ind ;
int check_name(char *given_name,int long *f_fp,int search)
{
	// Substitute the full file path
    // for the string file_path
     fp = fopen("input.csv", "r");
	int long temp;
	int ret = 1;
 
    if (!fp)
        printf("Can't open file\n");
 
    else {
        // Here we have taken size of
        // array 1024 you can modify it
        char buffer[200],temp_buffer[200];
 
        int row = 0, column = 0;
        ind = 0;
 
        while (fgets(buffer,200, fp)) 
		{
            column = 0;
            row++;

			strcpy(temp_buffer,buffer);

            if (row == 1)
			{
				temp = ftell(fp);
                continue;
			}
			

            // Splitting the data
            char* name = strtok(buffer, ",");
	
			while (name) {
		    	if(strcmp(str_lwr(name), str_lwr(given_name)) == 0 || search == 1)
			    {
			
			      *f_fp = temp;
				  if(search == 1)
				  {
					  if(strstr(str_lwr(name), str_lwr(given_name)) != NULL)
					  {
					     printf("\n%d). %s",ind+1, temp_buffer);
						 char *val = strtok(temp_buffer,",");
						 strcpy(s1[ind].name,val); 
						 ind++;
						 ret = 0;
						 break;
					  }
				  }
				  else
				  {
			         fclose(fp);
				     return 1;
				  }
		    	}
				else
				{
					int len = strlen(name);
					temp += len+1;
					

				}
                name = strtok(NULL, ", ");
			}

			temp = ftell(fp);
	
 
        }
 
		printf("\n");
        // Close the file
        fclose(fp);
    }
	if(search == 1)
	{
	  strcpy(s1[ind].name,"NULL");
      return ret;
	}
	else 
	{
		return 0;
	}
}



int check_phone_number(char *number)
{
	int len = strlen(number);
	int count = 0;
	if(len == 10)
	{
        for(int i = 0; number[i] != '\0'; i++)
		{
			if(number[i] >= 48 && number[i] <= 57)
			{
				count++;
			}
			else
			{
				printf("Please entere numeric numbers only\n");
				return 1;
			}
		}

		if(count == len)
			return 0;
	}
	else
	{
		printf("Please entere 10 digit number\n");
		return 1;
	}

}

int check_mailid(char *mailid)
{
	if(strstr(mailid, "@") == NULL)
	{
		printf("Mail must have @  try with again:  ");
		return 1;
	}
	else
	{
		if(strstr(mailid,".com") == NULL)
		{
			printf("Mail must have .com try with again:  ");
			return 1;
		}
	    return 0;	
	}

}


void edit_contact_details(char *name, char *old, char *update)
{
  

   	fp = fopen("input.csv", "r+");
	 
     char buffer[200];
	 char temp[200], ch;
 
        int row = 0, next_pos = 0;
        int column = 0;
	   remove("temp.csv");
	   FILE *ptr = fopen("temp.csv", "w+");
 
        while (fgets(buffer,200, fp)) 
		{
            column = 0;
            row++;
	       strcpy(temp,buffer);
            if (row == 1)
			{
               fwrite(buffer,1,strlen(buffer),ptr);
                continue;
			}
 
            char* value = strtok(buffer, ",");
			if(strcmp(str_lwr(value),str_lwr(name)) == 0)
			{
			   while(value)
			   {
				   if(strcmp(str_lwr(value),str_lwr(old)) == 0)
				   {
					   fwrite(update,1,strlen(update),ptr);
					   fwrite(",",1,1,ptr);
				   }
				   else
				   {
				     fwrite(value,1,strlen(value),ptr);
					 if(column != 4)
				     fwrite(",",1,1,ptr);
				   }

				   value = strtok(NULL,",");
				   column++;
			   }
			   next_pos = ftell(fp);
			}
			else
				fwrite(temp,1,strlen(temp),ptr);
        }
		
	

	   fseek(ptr,0,SEEK_SET);
	   fclose(fp);
	   remove("input.csv");
	  fp = fopen("input.csv", "w");
	  while((ch = fgetc(ptr)) != EOF)
	  {
		  fputc(ch, fp);
	  }

	  fclose(fp);
	  fclose(ptr);

	  printf("\nContact Edited Successfully\n");

	
     	  
} 

void delete_contact_details(char *name)
{
     fp = fopen("input.csv", "r+");
	 
     char buffer[200];
	 char temp[200], ch;
 
        int row = 0, next_pos = 0;
        int column = 0;
	   remove("temp.csv");
	   FILE *ptr = fopen("temp.csv", "w+");
 
        while (fgets(buffer,200, fp)) 
		{
            column = 0;
            row++;
	       strcpy(temp,buffer);
            if (row == 1)
			{
               fwrite(buffer,1,strlen(buffer),ptr);
                continue;
			}
 
            char* value = strtok(buffer, ",");
			if(strcmp(value,name) == 0)
			{
			   next_pos = ftell(fp);
			}
			else
				fwrite(temp,1,strlen(temp),ptr);
        }
		
	

	   fseek(ptr,0,SEEK_SET);
	   fclose(fp);
	   remove("input.csv");
	  fp = fopen("input.csv", "w");
	  while((ch = fgetc(ptr)) != EOF)
	  {
		  fputc(ch, fp);
	  }

	  fclose(fp);
	  fclose(ptr);

	  printf("\nContact deleted Successfully\n");

	  
}

void print_contacts()
{
	printf("\n-------------- ADDRESS BOOK ---------------\n");
	printf("\nNo. Name   Phone Number  Gmail  Location\n\n");
	// Substitute the full file path
    // for the string file_path
	int index = 1;

     fp = fopen("input.csv", "r");

    if (!fp)
        printf("Can't open file\n");

    else {
       
        char buffer[1024];

        int row = 0;
        int column = 0;

        while (fgets(buffer,1024, fp)) {
            column = 0;
            row++;

            if (row == 1)
                continue;

           printf("%d). %s\n", index,buffer);
		   index++;
    
        }
        fclose(fp);
    }
    return ;
}

char *str_lwr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char) str[i]);
    }
	return str;

}






