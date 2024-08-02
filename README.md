![image](https://github.com/user-attachments/assets/04c81719-51a0-4b8f-bb53-1ea554c1b5eb)**ADDRESS BOOK**

**Introduction**
Address book is small application witten in C language. It keeps track of names, telephone/mobile number, e-mail and location. It is a console application which uses standard I/O
for  adding  and deleting contact names, phone numbers and e-mail address, searching names and associated numbers and email address, update numbers,names,email and location and deleting contact.

**Project Operations:**
1) Add Contact.

2) Edit Contact.

3) Search Contact.

4) Delete Contact.

5) Print Address Book.

6) Exit.


each operation have corresponding sub operations Name, Number, E-mail, Location/address.

**1) ADD CONTACT**

 1.1) Add Name.
 
 1.2) Add number.

 1.3) Add E-mail.

 1.4) Location.

 1.5) Exit.

 when user select add contact it will read  contact Name first and then check that user name already present in address book or not if present then print prompt message "Given name already present adress book 
 please try with different name, if given name not present then store it one temp variable bcz we added after reading all details,
 then read number and check if give number is 10 digit ir not and also check if any letters in given number all conditions or ok then store it one temp variable,
 then read E-mail and validate it mush have @ and .com if not present the print prompt message to user  else store it in temp varaible,
 then read location and after reading all details then ask give contact save or not if press yes then those details fetch into address book.
 
 ![image](https://github.com/user-attachments/assets/afd52d5e-5f6b-45da-a1aa-c1ab4fc7984e)





**2) EDIT CONTACT**


2.1) Edit Name.

2.2) Edit Number.

2.3) Edit E-mail.

2.4) Edit Location.

2.5) exit


when user want to edit something, first user select one option from above list, if user want to edit name select option 1 then it read the name that user want edit and check/validate that name present or not and
if not present display the prompt message else display matched contacts and ask which one one you want to edit, based on the user input it read the new name that user want edit then updated.


![image](https://github.com/user-attachments/assets/fee09561-3eb4-403b-bed6-305600b3afb2)


![image](https://github.com/user-attachments/assets/96cbaa1c-3071-41c5-9486-91cf4c076ed8)


**3) SEARCH CONTACT**

3.1) Search Name.

3.2) Search Number.

3.3) Search E-mail.

3.4) Search Location.

3.5) exit


If user want search contact by using above oprtion, if present user input in address book it will show all matches contact details else display the prompt message

![image](https://github.com/user-attachments/assets/19b689a5-2fe1-4c19-982c-10fa95265555)



**4) DELETE CONTACT**


4.1) Name.

4.2) Number.

4.3) E-mail.

4.4) Location.

4.5) exit

user want delete particular contact in address book, it will display all matched contact details based on given option and ask which one you want delete and based on the 
user option it will delete from the address book.

![image](https://github.com/user-attachments/assets/98b38366-ec56-46d2-8a2a-ee1ef10811a4)


![image](https://github.com/user-attachments/assets/25acca6d-1466-46cf-9c2a-1275146cad4d)




**5) PRINT ADDRESS BOOK**

it will display all contacts details means print address book

![image](https://github.com/user-attachments/assets/ef3f0b0c-de2c-43fb-995e-c2103aa951a9)




**C concepts are**

in this project i used .csv file --> coma separated files to store the all contact details effceint way, this type of .csv file mostly used for store excel data type informations,
and i used file opeartions to handle the .csv file and array of pointers, strings, arrays, pointers and functions, i learn how to handle .csv file and handle data, i face challenge while doing adding and deleting
conatct details i used to another .csv file to store data into that file temporarly again copy whole data into orginal .csv file.

**conclude**

at last i saw my code, i wrote so many lines to do operations, but i want optimized code after thinking i got idea, then i used array of pointers to reduce the code effeciently.















 
