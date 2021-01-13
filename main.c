#include "booking.h"
#include "stock.h"
#include "employee.h"
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<time.h>
int main()
{
   int choice,i;char user[10];
   char pass[30];
   printf("************************************************************************************************************************\n\n");
   printf("\t\t\t\t\t\t ***VSG KTM***\n\n\n");\
   time_t t;   // not a primitive datatype
   time(&t);
   printf("\t\t\t\t\t\t\t\t\t\t\t  	%s", ctime(&t));
   printf("________________________________________________________________________________________________________________________\n");


printf("   ______________¶_____\n");
printf("________________¶¶¶____ \n");
printf("_______________¶¶¶¶¶___\n");
printf("_______________¶¶¶¶¶___\n");
printf("______________¶¶¶_¶¶¶__\n");
printf("______________¶¶¶__¶¶__\n");
printf("______________¶¶___¶¶¶_\n");
printf("_____________¶¶¶¶_¶¶¶¶¶______\n");
printf("¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
printf("¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
printf("__¶¶¶¶_________¶¶¶¶¶¶__________¶¶¶\n");
printf("____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\t\t\t\t\t\tCreated by:(*HACK O’ HOLICS*)\n");
printf("_____¶¶¶¶¶¶¶¶¶¶¶_¶_¶_¶¶¶¶¶¶¶¶¶\t\t\t\t\t\t\t\t*Aswin Karthik\n");
printf("________¶¶¶¶¶¶¶__¶¶¶_¶¶¶¶¶¶__\t\t\t\t\t\t\t\t*Joshua Joseph PS\n");
printf("_________¶¶¶¶¶_¶¶¶¶¶¶__¶¶¶___\t\t\t\t\t\t\t\t*Sabari RS\n");
printf("_________¶¶¶__¶¶¶¶¶¶¶¶_¶¶¶___\t\t\t\t\t\t\t\t*Padmanaban P\n");
printf("_________¶¶__¶¶¶¶¶¶¶¶¶¶__¶¶__\t\t\t\t\t\t\t\t*Suriya Prakash A\n");
printf("________¶¶¶_¶¶¶¶¶¶¶¶¶¶¶_¶¶¶__\t\t\t\t\t\t\t\t*Rekha R\n");
printf("_______¶¶¶_¶¶¶¶¶___¶¶¶¶¶¶_¶¶_\t\t\t\t\t\t\t\t*Divya dharshini\n");
printf("_______¶¶¶¶¶¶_________¶¶¶¶¶¶_\n");
printf("______¶¶¶¶¶_____________¶¶¶¶¶\n");
printf("______¶¶¶__________________¶¶¶\n");

   printf("\t\t\t\t\t\tLOADING LOGIN SCREEN");
 for(i=0;i<9000;i++)
               	{
                	printf("......");
                	printf("\b\b\b\b\b\b");
               	}

system("clear");
printf("───────────────────────────────███\n");
printf("──────────────────────────────█████\n");
printf("─────────────────────███████████████\n");
printf("──────────────────███████████████████\n");
printf("─────────────────█████████████─████─█\n");
printf("────────────────█████████████───█\n");
printf("───────────█────███████────███\n");
printf("───────────████──██████────████\n");
printf("────────────█████─██████─────███\n");
printf("────────────████████████──────████\n");
printf("─────█████───████████████───────███\n");
printf("───█████████──██████████─────█──██\n");
printf("─█████───████──████████████████████\n");
printf("████──██───███──██████████████████\n");
printf("███──█████──██████████████████████\n");
printf("███──████████████████████████████████\n");
printf("████──███──████████████████████████████\n");
printf("─████────████──███████████████──██────██\n");
printf("───█████████───█──█████████─────██\n");
printf("─────████────────────█████────██████\n");
printf("────────────────────────█───██████████\n");
printf("────────────────────────────███──██──███\n");
printf("──────────────────────────███───███───██\n");
printf("──────────────────────────██──██████──██\n");
printf("──────────────────────────██───█████──██\n");
printf("──────────────────────────███───███───██\n");
printf("───────────────────────────████─────███─\n");
printf("─────────────────────────────█████████──\n");

printf("\n");
while(1){
printf("\t\t\t\t\tEnter user: ");
scanf("%s",user);
 if(strcmp(user,"admin")==0)
   {
   	printf("\n\t\t\t\t\tEnter the password: ");
   	scanf("%s",pass);
   	if(strcmp("admin123",pass)==0)
   	{
       	do{
        	system("clear");
           	printf("************************************************************************************************************************\n\n");
        	printf("\t\t\tADMIN MAINTENANCE\n");
        	printf("\t\t1.Employee details\n\t\t2.Stock details\n\t\t3.Booking details\n\t\t4.Exit\n\t\tEnter your choice ---> ");
        	scanf("%d",&choice);
        	switch(choice)
        	{
            	case 1:emp();

             	for(i=0;i<1000;i++)
               	{
                	printf("...");
                	printf("\b\b\b");
               	}
                	break;
            	case 2:view();
   		 //system("clear");   	 
                	break;
            	case 3:book();
   		 //system("clear");
                	break;
            	case 4:
   		 exit(0);
              	default:
   		 printf("\t\t\tInvalid choice\n");
   		 break;
         	 
        	}}while(1);
    if(choice==4)
        	{
              	for(i=0;i<1000;i++)
          	{
             	printf("...");
             	printf("\b\b\b");
          	}
             	return 0;
        	}
  	 
    }
     else
          	{
              	printf("\t\t\t\t\tINVALID PASSWORD\n\n");
   		 system("clear");
          	}

       	 
       	 

	}
	else if(strcmp(user,"manager")==0)
	{
          	printf("\t\t\t\t\tEnter password: ");
          	scanf("%s",pass);
          	if(strcmp("manager123",pass)==0)
          	{
           	printf("LOADING");
          	for(i=0;i<1000;i++)
          	{
             	printf("...");
             	printf("\b\b\b");
          	}
   	 
    do{
          	system("clear");
          	printf("************************************************************************************************************************\n");
          	printf("\t\t\tSHOWROOM MAINTENANCE\n");
          	printf("\t\t1.Employee details\n\t\t2.Stock details\n\t\t3.Booking details\n\t\t4.Exit\n\t\tEnter your choice ---> ");
          	scanf("%d",&choice);
         	         	 
            	switch(choice)
            	{
            	case 1:emp();
                	break;
            	case 2:view();
                	break;
            	case 3:book();
                	break;
   	 case 4:exit(0);
           	 
     	 default:
   		 printf("\t\t\tInvalid choice\n");
   		 break;
                          	}
            	/*printf("\t\t1.Employee details\n\t\t2.Stock details\n\t\t3.Booking details\n\t\t4.Exit");
            	scanf("%d",&choice);*/
          	}while(1);
          	if(choice==4)
          	{
             	return 0;
          	}
          	}
          	else
          	{
              	printf("\t\t\t\t\tINVALID PASSWORD\n\n");
   		 system("clear");
          	}
   	}
   	else if(emp_nsearch(user)==1)
   	{
    do{
          	system("clear");
          	printf("\t******************************************************************\n");
          	printf("\t\t\tSHOWROOM MAINTENANCE\n");
          	printf("\t\t1.Stock details\n\t\t2.Booking details\n\t\t3.Exit\n\t\tEnter your choice ---> ");
          	scanf("%d",&choice);
            	switch(choice)
            	{
            	case 1:view();
                	break;
            	case 2:book();
                	break;
   	 case 3:
   		 exit(0);
            	default:
   		 printf("\t\t\tInvalid choice\n");
   		 break;
            	}
          	}while(1);
          	if(choice==3)
          	{
             	return 0;
          	}
   	}
    else
    	{
          	printf("\n\n\t\t\t\tInvaid User\n");
   	 system("clear");
          	continue;
     	}

}
}
