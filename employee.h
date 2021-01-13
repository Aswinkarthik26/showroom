#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee
{
    char id[5],name[30],addr[50],phno[15];
    char doj[15],quali[25],desig[20];
    int sal,age;
}s1,m;

void emp_add()
{
    FILE *f;
    f=fopen("Employee.dat","ab");
    printf("\n\n\t\t\t\t-ADDING EMPLOYEE DETAILS-\n");
    printf("\nEnter the employee name : ");
    scanf("  %[^\n]s",m.name);
    printf("Enter the address : ");
    scanf("  %[^\n]s",m.addr);
    printf("Enter the phone number : ");
    scanf("  %[^\n]s",m.phno);
    printf("Enter the employee qualification : ");
    scanf("  %[^\n]s",m.quali);
    printf("Enter the date of joining : ");
    scanf("  %[^\n]s",m.doj);
    printf("Enter the designation : ");
    scanf("  %[^\n]s",m.desig);
    printf("Enter the employee age : ");
    scanf("%d",&m.age);
    printf("Enter the salary : ");
    scanf("%d",&m.sal);
    m.id[0]=m.name[2];
    m.id[1]=m.phno[4];
    m.id[2]=m.doj[0];
    m.id[3]=m.doj[1];
    m.id[4]='\0';
    fwrite(&m,sizeof(m),1,f);
    printf("\n\n\t\tEmployee Details Has Been Saved....");
    fclose(f);
}

void emp_read()
{
    FILE *f;
    char x;
    f=fopen("Employee.dat","rb");
    if(f==NULL)
    {
   	 printf("\nNo such file exits....");
   	 return;
    }
    printf("\n\n\t\t\t\t-DISPLAYING EMPLOYEE DETAILS-\n");
    fseek(f,0,SEEK_SET);
    if(fread(&s1,sizeof(s1),1,f)==0)
    {
   	 printf("\nNo Records to display....");
   	 return;
    }
    fseek(f,0,0);
    while(fread(&s1,sizeof(s1),1,f)>0)
    {
   	 printf("  	Id    	: %s\n",s1.id);
   	 printf(" 	Name   	: %s\n",s1.name);
   	 printf(" 	Age    	: %d\n",s1.age);
   	 printf("   Address  	: %s\n",s1.addr);
   	 printf("   Salary   	: %d\n",s1.sal);
   	 printf("  Phone No. 	: %s\n",s1.phno);
   	 printf("Date Of Joining : %s\n",s1.doj);
   	 printf("  Qualificaton  : %s\n",s1.quali);
   	 printf("  Designation   : %s\n\n\n",s1.desig);
    }
    scanf("%c",&x);
    fclose(f);
}

void emp_update()
{
    FILE *f;
    f=fopen("Employee.dat","rb+");
    if(f==NULL)
    {
   	 printf("\nNo such file exits....");
   	 return;
    }
    char id1[4];
    int fl=0;
    printf("\n\n\t\t\t\t-UPDATING EMPLOYEE DETAILS-\n");
    if(fread(&s1,sizeof(s1),1,f)==0)
    {   	 
   	 printf("\nNo records to be Searched...");
   	 return;
    }
    printf("\nEnter the id to UPDATE the details : ");
    scanf(" %s ",id1);
    fseek(f,0,0);
    while(fread(&s1,sizeof(s1),1,f)>0)
    {
   	 if(strcmp(id1,s1.id)==0)
   	 {
   		 
   		 printf("\n-The Details To Be Updated-\n");
   		 printf("  	Id    	: %s\n",s1.id);
   		 printf(" 	Name   	: %s\n",s1.name);
   		 printf(" 	Age    	: %d\n",s1.age);
   		 printf("   Address  	: %s\n",s1.addr);
   		 printf("   Salary   	: %d\n",s1.sal);
   		 printf("  Phone No. 	: %s\n",s1.phno);
   		 printf("Date Of Joining : %s\n",s1.doj);
   		 printf("  Designation   : %s\n",s1.desig);
   		 printf("  Qualificaton  : %s\n\n\n",s1.quali);    
   		 printf("\n-Enter the updated data-\n");
   		 printf("\nEnter the employee name : ");
   		 scanf("  %[^\n]s",m.name);
   		 printf("Enter the address : ");
   		 scanf("  %[^\n]s",m.addr);
   		 printf("Enter the phone number : ");
   		 scanf("  %[^\n]s",m.phno);
   		 printf("Enter the employee qualification : ");
   		 scanf("  %[^\n]s",m.quali);
   		 printf("Enter the date of joining : ");
   		 scanf("  %[^\n]s",m.doj);
   		 printf("Enter the designation : ");
   		 scanf("  %[^\n]s",m.desig);
   		 printf("Enter the employee age : ");
   		 scanf("%d",&m.age);
   		 printf("Enter the salary : ");
   		 scanf("%d",&m.sal);
   		 m.id[0]=m.name[2];
   		 m.id[1]=m.phno[4];
   		 m.id[2]=m.doj[0];
   		 m.id[3]=m.doj[1];
   		 m.id[4]='\0';
   		 fseek(f,(sizeof(m)),SEEK_CUR);
   		 fwrite(&m,sizeof(m),1,f);
   		 fl=1;
   		 break;
   	 }
    }
    if(fl==0)
   	 printf("\nRecord not found....");
    else
   	 printf("\n\n\t\tEmployee Details Has Been Updated....");
    fclose(f);
}

void emp_delete()
{
    FILE *f,*k;
    f=fopen("Employee.dat","rb");
    if(f==NULL)
    {
   	 printf("\nNo such file exits....");
   	 return;
    }
    k=fopen("New.dat","wb");
    char id1[4];
    int fl=0;
    printf("\n\n\t\t\t\t-DELETING EMPLOYEE DETAILS-\n");
    if(fread(&s1,sizeof(s1),1,f)==0)
    {   	 
   	 printf("\nNo records to be Deleted...");
   	 return;
    }
    printf("\nEnter the id to DELETE the details : ");
    scanf("%s",id1);
    fseek(f,0,0);
    while(fread(&s1,sizeof(s1),1,f)>0)
    {
   	 if(strcmp(id1,s1.id)==0)
   	 {
   		 
   		 printf("\n-The Details To Be Deleted-\n");
   		 printf("  	Id    	: %s\n",s1.id);
   		 printf(" 	Name   	: %s\n",s1.name);
   		 printf(" 	Age    	: %d\n",s1.age);
   		 printf("   Address  	: %s\n",s1.addr);
   		 printf("   Salary   	: %d\n",s1.sal);
   		 printf("  Phone No. 	: %s\n",s1.phno);
   		 printf("Date Of Joining : %s\n",s1.doj);
   		 printf("  Designation   : %s\n",s1.desig);
   		 printf("  Qualificaton  : %s\n\n\n",s1.quali);
   		 fl=1;
   	 }
   	 else
   		 fwrite(&s1,sizeof(s1),1,k);
    }
    if(fl==0)
   	 printf("\nRecord not found....");
    else
   	 printf("\n\n\t\tEmployee Details Has Been Deleted....");
    fclose(f);
    fclose(k);
    remove("Employee.dat");
    rename("New.dat","Employee.dat");
}

void emp_search()
{
    FILE *f;
    f=fopen("Employee.dat","rb");
    if(f==NULL)
    {
   	 printf("\nNo such file exits....");
   	 return;
    }
    char id1[4];
    int fl=0;
    printf("\n\n\t\t\t\t-SEARCHING EMPLOYEE DETAILS-\n");
    if(fread(&s1,sizeof(s1),1,f)==0)
    {   	 
   	 printf("\nNo records to be Searched...");
   	 return;
    }
    printf("\nEnter the id to SEARCH the details : ");
    scanf("%s",id1);
    fseek(f,0,0);
    while(fread(&s1,sizeof(s1),1,f)>0)
    {
   	 if(strcmp(id1,s1.id)==0)
   	 {
   		 
   		 printf("\n-The Details Searched-\n");
   		 printf("  	Id    	: %s\n",s1.id);
   		 printf(" 	Name   	: %s\n",s1.name);
   		 printf(" 	Age    	: %d\n",s1.age);
   		 printf("   Address  	: %s\n",s1.addr);
   		 printf("   Salary   	: %d\n",s1.sal);
   		 printf("  Phone No. 	: %s\n",s1.phno);
   		 printf("Date Of Joining : %s\n",s1.doj);
   		 printf("  Designation   : %s\n",s1.desig);
   		 printf("  Qualificaton  : %s\n\n\n",s1.quali);
   		 fl=1;
   		 break;
   	 }
    }
    if(fl==0)
    {
   	 printf("\nEmployee not found....");
    }
}
int emp_nsearch(char id1[20])
{
    FILE *f;
    f=fopen("Employee.dat","rb");
    if(f==NULL)
   	 return -1;
    int fl=0;
    if(fread(&s1,sizeof(s1),1,f)==0)
    {   	 
   	 return -2;
    }
    fseek(f,0,0);
    while(fread(&s1,sizeof(s1),1,f)>0)
    {
   	 if(strcmp(id1,s1.id)==0)
   	 {
   		 fl=1;
   		 return 1;
   	 }
    }
    if(fl==0)
    {
   	 return 0;
    }
}
void emp()
{
    do{
   	 system("clear");
   	 int ch;
   	 char x;
   	 printf("*********************************************************************************************************************");
   	 printf("\n\t\t\tEMPLOYEE DETAILS\n");
   	 printf("\t\t1.Add Employee\n\t\t2.Employee Updation\n\t\t3.Employee List\n\t\t4.Delete Employee\n\t\t5.Search Employee\n\t\t6.Go back to Main Menu\n\t\t7.Exit");
   	 printf("\nEnter your choice : ");
   	 scanf("%d",&ch);
   	 switch(ch)
   	 {
   		 case 1:
   			 emp_add();
   			 scanf("%c",&x);
   	 	break;
   		 case 2:
   			 emp_update();
   			 scanf("%c",&x);
   	 	break;
   		 case 3:
   			 emp_read();
   			 //scanf("%c",&x);
   			 getchar();
   	 	break;
   		 case 4:
   			 emp_delete();
   			 scanf("%c",&x);
   	 	break;
   		 case 5:
   			 emp_search();
   			 scanf("%c",&x);
   		 break;
   		 case 6:
   			 return;
   		 case 7:
   			 exit(0);
   		 default:
   			 printf("Invalid input");
   	 }

    }while(1);
}
