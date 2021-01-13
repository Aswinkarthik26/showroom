#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
char c;
int stock();
int availability(int );

int price(int id);
void newstock(int id,int n);

void stockupdate(int id);
void view()
{
	do{

	system("clear");
	int ch,id,n;
	printf("******************************************************");
	printf("\n\t\t\t\t****STOCK DETAILS****\n");
	printf("\n\t\t\t1.Stock details\n\t\t\t2.New stock\n\t\t\t3.Go to main menu\n\t\t\t4.Exit\n\t\tEnter your choice ---> ");
    	scanf("%d",&ch);

	switch(ch)
    	{
        	case 1:stock();
            	break;
        	case 2:printf("enter the id and no of stock to be updated: ");
            	scanf("%d %d",&id,&n);
            	newstock(id,n);
            	break;
        	case 3:return;
        	case 4:exit(0);
        	default:printf("Invalid Input");

    	}
	}while(1);
}
int stock(){
	char buff[2555];
	int p,av,id=1;
	FILE *model,*price,*avail;
	model=fopen("model.txt","r");
	price=fopen("price.txt","r");
	avail=fopen("avail.txt","r");
	printf("\n***********STOCK DETAILS***********\n");
	printf("ID\tMODEL\tPRICE\tAvailablity\n");
	while(fscanf(model,"%s",buff)!=EOF&&fscanf(price,"%d",&p)&&fscanf(avail,"%d",&av)!=EOF)
	{
    	printf("%d\t%s\t%d\t  %d\n",id++,buff,p,av);

	}
	fclose(model);
	fclose(price);
	fclose(avail);
	printf("Enter a key to return back\n");
	scanf(" %c",&c);
	return 0;
}
int availability(int id)
{
	int av;
	FILE *model,*price,*avail;
	model=fopen("model.txt","r");
	price=fopen("price.txt","r");
	avail=fopen("avail.txt","r");
	fseek(avail,id*2-2,SEEK_SET);
	fscanf(avail,"%d",&av);
	fclose(model);
	fclose(price);
	fclose(avail);
	printf("Enter a key to return back\n");
	scanf("%c",&c);

	return av;
}
void stockupdate(int id)
{
	int av,a[100],i=0,l;
	FILE *model,*price,*avail;
	avail=fopen("avail.txt","r");
	fseek(avail,0,SEEK_SET);
	while(fscanf(avail,"%d",&av)!=EOF){
    	a[i++]=av;
	}
	l=i;
	a[id-1]--;
	fclose(avail);
	avail=fopen("avail.txt","w");
	for(i=0;i<l;i++)
	{
     	fprintf(avail,"%d ",a[i]);
	}
   // printf("%d",i);
 	fclose(avail);
 }
int price(int id)
{
	int av,i=0,a[100];
	FILE *model,*price,*avail;
	model=fopen("model.txt","r");
	price=fopen("price.txt","r");
	avail=fopen("avail.txt","r");
	while(fscanf(price,"%d",&av)!=EOF){
    	a[i++]=av;
	}
	av=a[id-1];
	fseek(price,0,SEEK_SET);
	fclose(model);
	fclose(price);
	fclose(avail);
	return av;
}
void newstock(int id,int n)
{
	int av,a[100],i=0,l;
	FILE *model,*price,*avail;
	avail=fopen("avail.txt","r");
	fseek(avail,0,SEEK_SET);
	while(fscanf(avail,"%d",&av)!=EOF){
    	a[i++]=av;
	}
	l=i;
   a[id-1]=a[id-1]+n;
	fclose(avail);
	avail=fopen("avail.txt","w");
	for(i=0;i<l;i++)
	{
     	fprintf(avail,"%d ",a[i]);
	}
   // printf("%d",i);
 	fclose(avail);
 }
