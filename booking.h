#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stock.h"
#ifndef BOOKING_H_INCLUDED
#define BOOKING_H_INCLUDED
int count=1;
struct book{
	char cus_id[5],cus_name[100],cus_add[150],ph_no[10],type[10];
	int rate;
	int model;
}s,a,b,t,r;
void display();
void del();
void add();
//void payment(int);
int book();
int book()
{
	int b_c;
	do{
    system("clear");
   	printf("************************************************************************************************************************\n\n");
	printf("\n\t\t\tCUSTOMER  BOOKING");
	printf("\n1-View booking details\n2-Add a booking detail\n3-Delete a booking detail\n4-Go to main menu\n5-Exit\n\t\tEnter your choice ---> ");
	scanf("%d",&b_c);
	switch(b_c)
	{
	case 1:
    	{
        	display();
        	break;
	}
	case 2:
    	{
        	add();
        	break;
    	}
	case 3:
    	{
        	del();
        	break;
    	}
	case 4:
    	{
        	return 0;
        	break;
    	}
	case 5:
    	{
        	exit (1);
        	break;
    	}
	default:
    	printf("\n Invalid Input");
    	break;
	}

}while(1);
return 0;
}
void display()
{
//bk t;
	int n;
	printf("Enter\n1.All the customer details\n2.Specific customer details\n");
	scanf("%d",&n);
	FILE *fp=fopen("booking.dat","rb+");

	switch(n)
	{
	case 1:
    	fseek(fp, 0, SEEK_SET);
    	printf("ID\t NAME\t ADDRESS\t PHONE NO.\t TYPE\t RATE\t MODEL ID\n");
     	while(fread(&t,sizeof(t),1,fp)>0)
     	{
        	printf("\n%s\t %s\t %s\t\t %10s\t %s\t %d\t %d",t.cus_id,t.cus_name,t.cus_add,t.ph_no,t.type,t.rate,t.model);
     	}

   	break;

	case 2:
	printf("\n Enter customer id:");
	char id[5];
   	scanf("  %[^\n]s  ",id);
    	char *temp;
    	int f=1;

      	fseek(fp, 0, SEEK_SET);

          	while(fread(&t,sizeof(t),1,fp)>0)
                	{
                    	if(strcmp(t.cus_id,id)==0)
                    	{
  printf("ID\t NAME\t ADDRESS\t PHONE NO.\t TYPE\t RATE\t MODEL ID\n");

         	printf("\n%s\t %s\t %s\t\t %10s\t %s\t %d\t %d",t.cus_id,t.cus_name,t.cus_add,t.ph_no,t.type,t.rate,t.model);
                       	f=0;
                       	break;
                    	}
                	}
	if(f==1)
    	printf("\n Record not found");

        	break;
	}
	fclose(fp);
    printf("\nEnter a key to exit\n");
    scanf("%d",&n);
}
void add()
{
	int f=0;
	FILE *fp=fopen("booking.dat","ab");
	if(fp==NULL)
	{
    	printf("error opening file\n");
	}
	else
	{
    	printf("\nEnter customer id: ");
    	scanf("  %[^\n]s",b.cus_id);
    	printf("Enter customer name: ");
    	scanf("  %[^\n]s",b.cus_name);
    	printf("Enter customer address: ");
    	scanf("   %[^\n]s",b.cus_add);
    	printf("Enter customer phone number: ");
    	scanf("  %[^\n]s",b.ph_no);
    	printf("Enter model ID: ");
    	scanf("  %d",&b.model);
    	b.rate=price(b.model);
    	printf("Enter the type of payment: ");
   	scanf("  %[^\n]s",b.type);

    	fwrite(&b,sizeof(b),1,fp);
	}
	fclose(fp);

}

void del()
{
    FILE *f,*k;
    f=fopen("booking.dat","rb");
    if(f==NULL)
    {
   	 printf("\nNo such file exits....");
   	 return;
    }
    k=fopen("New.dat","wb");
    char id[4];
    int fl=0;
//    printf("\n\n\t\t\t\t-DELETING EMPLOYEE DETAILS-\n");
    printf("\nEnter the id to DELETE the details : ");
    scanf("%s",id);
    fseek(f,0,0);
    while(fread(&s,sizeof(s),1,f)>0)
    {
   	 if(strcmp(id,s.cus_id)==0)
   	 {

   		 printf("\n-The Details To Be Deleted-\n");
   		 printf("  	Id    	: %s\n",s.cus_id);
   		 printf(" 	Name   	: %s\n",s.cus_name);
   		 printf("   Address  	: %s\n",s.cus_add);
   		 printf("  Phone No. 	: %s\n",s.ph_no);
   		 printf("	Type    	: %s\n",s.type);
   		 fl=1;
   	 }
   	 else
   		 fwrite(&s,sizeof(s),1,k);
    }
    if(f==0)
   	 printf("\nRecord not found....");
    else
   	 printf("\n\n\t\tCustomer Details Has Been Deleted....");
    fclose(f);
    fclose(k);
    remove("booking.dat");
    rename("New.dat","booking.dat");
}
#endif // BOOKING_H_INCLUDED


