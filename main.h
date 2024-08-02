#ifndef MAIN_H
#define MAIN_H

#define _FFS(x)

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
#include <ctype.h>
#include <stdlib.h>


struct name
{
	char name[30];
}s1[10];

int check_name(char *, int long *,int search);
int check_phone_number(char *);
int check_mailid(char *);
void add_contact(void);
void edit_contact(void);
void edit_contact_details(char *name, char *old, char *update );
void search_contact(void);
void delete_contact(void);
void print_contacts(void);
void delete_contact_details(char *name);
char *str_lwr(char *str);

#endif
