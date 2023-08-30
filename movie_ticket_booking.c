#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char email[100];
    int password;
    struct node *next;
}*uri=NULL,*spiderman=NULL,*nadi_dosh=NULL;
struct data
{
    int a[5][5];
    int ti;
	int d;
	int	m;
	int y;
	struct data *n;
}*URI,*SPIDER_MAN,*NADI_DOSH;

void de()
{
	int k,i,j;
	URI=(struct node*)malloc(sizeof(struct node));
    URI->d=10;
	URI->m=10;
	URI->y=2022;
	URI->ti=21;
	k=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			URI->a[i][j]=k;
			k++;
		}
	}
	URI->n=(struct node*)malloc(sizeof(struct node));
	URI->n->d=11;
	URI->n->m=10;
	URI->n->y=2022;
	URI->n->ti=21;
	k=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			URI->n->a[i][j]=k;
			k++;
		}
	}
	NADI_DOSH=(struct node*)malloc(sizeof(struct node));
	NADI_DOSH->d=12;
	NADI_DOSH->m=10;
	NADI_DOSH->y=2022;
	NADI_DOSH->ti=21;
	k=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			NADI_DOSH->a[i][j]=k;
			k++;
		}
	}
	NADI_DOSH->n=(struct node*)malloc(sizeof(struct node));
	NADI_DOSH->n->d=13;
	NADI_DOSH->n->m=10;
	NADI_DOSH->n->y=2022;
	NADI_DOSH->n->ti=21;
	k=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			NADI_DOSH->n->a[i][j]=k;
			k++;
		}
	}
	SPIDER_MAN=(struct node*)malloc(sizeof(struct node));
	SPIDER_MAN->d=14;
    SPIDER_MAN->m=10;
	SPIDER_MAN->y=2022;
	SPIDER_MAN->ti=21;
	k=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			SPIDER_MAN->a[i][j]=k;
			k++;
		}
	}
	SPIDER_MAN->n=(struct node*)malloc(sizeof(struct node));
	SPIDER_MAN->n->d=15;
	SPIDER_MAN->n->m=10;
	SPIDER_MAN->n->y=2022;
	SPIDER_MAN->n->ti=21;
	k=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			SPIDER_MAN->n->a[i][j]=k;
			k++;
		}
	}
}
void view()
{
    int i,j,n;
	 printf("Enter a Choice\n1. URI\n2. SPIDER MAN\n 3. NADI_DOSH\n");
    scanf("%d",&n);
    if (n==1)
{
	struct data *t;
    t=(struct node*)malloc (sizeof(struct node));
	printf("\nmovie date:-%d/%d/%d",URI->d,URI->m,URI->y);
	printf("\nmovie time:-%d:00",URI->ti);
	printf("\nmovie date:-%d/%d/%d",URI->n->d,URI->n->m,URI->n->y);
	printf("\nmovie time:-%d:00",URI->n->ti);
	printf("\n\n::: enter date you want to book:");
	scanf("%d",&t->d);
	if(URI->d==t->d)
	{
	printf("\n\navailable sites");
	printf("\n\n::::::'0' indicating sit is already booked::::::");
	for(i=0;i<5;i++)
	{
		printf("\n\t");
		for(j=0;j<5;j++)
		{
		    if(i<2)
		    {
		        	printf("%d  ",URI->a[i][j]);
		    }
		    else{
			printf("%d ",URI->a[i][j]);
		    }
		}
	}
	
	}
	if(URI->n->d==t->d)
	{
	printf("\n\navailable seats");
	printf("\n\n::::::'0' indicating seat is already booked::::::");
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=0;j<5;j++)
		{
		    if(i<2)
		    {
		        	printf("%d  ",URI->n->a[i][j]);
		    }
		    else{
			printf("%d ",URI->n->a[i][j]);
		    }
		}
	}
	}
}
 if (n==2)
 {
	struct data *t;
    t=(struct node*)malloc (sizeof(struct node));
	printf("\nmovie date:-%d/%d/%d",SPIDER_MAN->d,SPIDER_MAN->m,SPIDER_MAN->y);
	printf("\nmovie time:-%d:00",SPIDER_MAN->ti);
	printf("\nmovie date:-%d/%d/%d",SPIDER_MAN->n->d,SPIDER_MAN->n->m,SPIDER_MAN->n->y);
	printf("\nmovie time:-%d:00",SPIDER_MAN->n->ti);
	printf("\n\n::::enter date you want to book:");
	scanf("%d",&t->d);
	if(SPIDER_MAN->d==t->d)
	{
	printf("\n\navailable sites");
	printf("\n\n::::::'0' indicating seat is already booked::::::");
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=0;j<5;j++)
		{
		    if(i<2)
		    {
		        	printf("%d  ",SPIDER_MAN->a[i][j]);
		    }
		    else{
			printf("%d ",SPIDER_MAN->a[i][j]);
		    }
		}
	}
	}
		if(SPIDER_MAN->n->d==t->d)
	{
	printf("\n\navialable sites");
	printf("\n\n::::::'0' indicating sit is already booked::::::");
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=0;j<5;j++)
		{
		    if(i<2)
		    {
		        	printf("%d  ",SPIDER_MAN->n->a[i][j]);
		    }
		    else{
			printf("%d ",SPIDER_MAN->n->a[i][j]);
		    }
		}
	}
	}
}
 if (n==3)
    {
	struct data *t;
    t=(struct node*)malloc (sizeof(struct node));
	printf("\nmovie date:-%d/%d/%d",NADI_DOSH->d,NADI_DOSH->m,NADI_DOSH->y);
	printf("\nmovie time:-%d:00",NADI_DOSH->ti);
	printf("\nmovie date:-%d/%d/%d",NADI_DOSH->n->d,NADI_DOSH->n->m,NADI_DOSH->n->y);
	printf("\nmovie time:-%d:00",NADI_DOSH->n->ti);
	printf("\n\n ::::enter date you want to book :");
	scanf("%d",&t->d);
	if(NADI_DOSH->d==t->d)
	{
	printf("\n\navailable sites");
	printf("\n\n0 = book");
	for(i=0;i<5;i++)
	{
		printf("\n\t");
		for(j=0;j<5;j++)
		{
		    if(i<2)
		    {
		        	printf("%d  ",NADI_DOSH->a[i][j]);
		    }
		    else{
			printf("%d ",NADI_DOSH->a[i][j]);
		    }
		}
	}
	}
		if(NADI_DOSH->n->d==t->d)
	{
	printf("\n\navialable sites");
	printf("\n\n::::::'0' indicating sit is already booked::::::");
	for(i=0;i<5;i++)
	{
		printf("\n\t");
		for(j=0;j<5;j++)
		{
		    if(i<2)
		    {
		        	printf("%d  ",NADI_DOSH->n->a[i][j]);
		    }
		    else{
			printf("%d ",NADI_DOSH->n->a[i][j]);
		    }
		}
	}
	}
}
}
void welcomeMessage()
{system("cls");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =               WELCOME TO                  =");
    printf("\n\t\t\t        =              ONLINE MOVIE                 =");
    printf("\n\t\t\t        =             TICKET BOKKING                 =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\n");
}
void booking()
{
	int i,j,k,t,h,m;
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	printf("\nenter your email id :");
	scanf("%s",&new->email);
	printf("\nenter your password :");
	scanf("%d",&new->password);
	printf("\nWelcome.Login Success!");
	welcomeMessage();
    printf("\n1. URI\n2. SPIDER MAN\n3. NADI_DOSH\nEnter no for proceed further:");
    int n;
    scanf("%d",&n);
    struct node *temp;
    if (n==1){
	temp=uri;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
	strcpy(temp->email,new->email);
	temp->password=new->password;	
	}
	else
	{
	while(temp->next!=NULL)
	{
    temp=temp->next; 		
	}
	temp->next=(struct node*)malloc (sizeof(struct node));
	temp=temp->next;
    strcpy(temp->email,new->email);
	temp->password=new->password;
    }
	struct data *t;
    t=(struct node*)malloc (sizeof(struct node));
	printf("\nmovie date:-%d/%d/%d",URI->d,URI->m,URI->y);
	printf("\nmovie time:-%d:00",URI->ti);
	printf("\nmovie date:-%d/%d/%d",URI->n->d,URI->n->m,URI->n->y);
	printf("\nmovie time:-%d:00",URI->n->ti);
	printf("\n\n enter date you want to book");
	scanf("%d",&t->d);
	if(URI->d==t->d)
	{
	printf("\n\navalable sites");
	printf("\n\n0 = book");
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=0;j<5;j++)
		{
		    if(i<2)
		    {
		        	printf("%d  ",URI->a[i][j]);
		    }
		    else{
			printf("%d ",URI->a[i][j]);
		    }
		}
	}
	printf("\n\n enter the total sit you want to book");
	scanf("%d",&h);
	for(k=1;k<=h;k++)
	{
	    printf("enter %d sit",k);
		scanf("%d",&m);
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		if(URI->a[i][j]==m)
		{
			URI->a[i][j]=0;
		}
		}
	}
	}
	}
	if(URI->n->d==t->d)
	{
	printf("\n\navalable sites");
	printf("\n\n0 = book");
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=0;j<5;j++)
		{
		    if(i<2)
		    {
		        	printf("%d  ",URI->n->a[i][j]);
		    }
		    else{
			printf("%d ",URI->n->a[i][j]);
		    }
		}
	}
	printf("\n\n enter the total sit you want to book");
	scanf("%d",&h);
	for(k=1;k<=h;k++)
	{
	    printf("enter %d sit",k);
		scanf("%d",&m);
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		if(URI->n->a[i][j]==m)
		{
			URI->n->a[i][j]=0;
		}
		}
	}
	}
	}
}
 if (n==2){
	temp=spiderman;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
	strcpy(temp->email,new->email);
	temp->password=new->password;	
	}
	else
	{
	while(temp->next!=NULL)
	{
    temp=temp->next; 		
	}
	temp->next=(struct node*)malloc (sizeof(struct node));
	temp=temp->next;
    strcpy(temp->email,new->email);
	temp->password=new->password;
    }
	struct data *t;
    t=(struct node*)malloc (sizeof(struct node));
	printf("\nmovie date:-%d/%d/%d",SPIDER_MAN->d,SPIDER_MAN->m,SPIDER_MAN->y);
	printf("\nmovie time:-%d:00",SPIDER_MAN->ti);
	printf("\nmovie date:-%d/%d/%d",SPIDER_MAN->n->d,SPIDER_MAN->n->m,SPIDER_MAN->n->y);
	printf("\nmovie time:-%d:00",SPIDER_MAN->n->ti);
	printf("\n\n enter date you want to book");
	scanf("%d",&t->d);
	if(SPIDER_MAN->d==t->d)
	{
	printf("\n\navalable sites");
	printf("\n\n0 = book");
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=0;j<5;j++)
		{
		    if(i<2)
		    {
		        	printf("%d  ",SPIDER_MAN->a[i][j]);
		    }
		    else{
			printf("%d ",SPIDER_MAN->a[i][j]);
		    }
		}
	}
	printf("\n\n enter the total sit you want to book");
	scanf("%d",&h);
	for(k=1;k<=h;k++)
	{
	    printf("enter %d sit",k);
		scanf("%d",&m);
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		if(SPIDER_MAN->a[i][j]==m)
		{
			SPIDER_MAN->a[i][j]=0;
		}
		}
	}
	}
	}
		if(SPIDER_MAN->n->d==t->d)
	{
	printf("\n\navalable sites");
	printf("\n\n0 = book");
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=0;j<5;j++)
		{
		    if(i<2)
		    {
		        	printf("%d  ",SPIDER_MAN->n->a[i][j]);
		    }
		    else{
			printf("%d ",SPIDER_MAN->n->a[i][j]);
		    }
		}
	}
	printf("\n\n enter the total sit you want to book");
	scanf("%d",&h);
	for(k=1;k<=h;k++)
	{
	    printf("enter %d sit",k);
		scanf("%d",&m);
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		if(SPIDER_MAN->n->a[i][j]==m)
		{
			SPIDER_MAN->n->a[i][j]=0;
		}
		}
	}
	}
	}
}
    if (n==3){
	temp=nadi_dosh;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
	strcpy(temp->email,new->email);
	temp->password=new->password;	
	}
	else
	{
	while(temp->next!=NULL)
	{
    temp=temp->next; 		
	}
	temp->next=(struct node*)malloc (sizeof(struct node));
	temp=temp->next;
    strcpy(temp->email,new->email);
	temp->password=new->password;
    }
	struct data *t;
    t=(struct node*)malloc (sizeof(struct node));
	printf("\nmovie date:-%d/%d/%d",NADI_DOSH->d,NADI_DOSH->m,NADI_DOSH->y);
	printf("\nmovie time:-%d:00",NADI_DOSH->ti);
	printf("\nmovie date:-%d/%d/%d",NADI_DOSH->n->d,NADI_DOSH->n->m,NADI_DOSH->n->y);
	printf("\nmovie time:-%d:00",NADI_DOSH->n->ti);
	printf("\n\n enter date you want to book");
	scanf("%d",&t->d);
	if(NADI_DOSH->d==t->d)
	{
	printf("\n\navalable sites");
	printf("\n\n0 = book");
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=0;j<5;j++)
		{
		    if(i<2)
		    {
		        	printf("%d  ",NADI_DOSH->a[i][j]);
		    }
		    else{
			printf("%d ",NADI_DOSH->a[i][j]);
		    }
		}
	}
	printf("\n\n enter the total sit you want to book");
	scanf("%d",&h);
	for(k=1;k<=h;k++)
	{
	    printf("enter %d sit",k);
		scanf("%d",&m);
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		if(NADI_DOSH->a[i][j]==m)
		{
			NADI_DOSH->a[i][j]=0;
		}
		}
	}
	}
	}
		if(NADI_DOSH->n->d==t->d)
	{
	printf("\n\navalable sites");
	printf("\n\n0 = book");
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=0;j<5;j++)
		{
		    if(i<2)
		    {
		        	printf("%d  ",NADI_DOSH->n->a[i][j]);
		    }
		    else{
			printf("%d ",NADI_DOSH->n->a[i][j]);
		    }
		}
	}
	printf("\n\n enter the total sit you want to book");
	scanf("%d",&h);
	for(k=1;k<=h;k++)
	{
	    printf("enter %d sit::",k);
		scanf("%d",&m);
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		if(NADI_DOSH->n->a[i][j]==m)
		{
			NADI_DOSH->n->a[i][j]=0;
		}
		}
	}
	}
	}
}
    
    system("cls");
}
void main()
{
	de();
	int c;
	    while(1)
	    {
		printf("\n\n");
		printf("\n1.Online ticket booking\n2.view details \n3.exit");
		printf("\nEnter your choice:-");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				booking();
				break;
			case 2:
				view();
				break;
			case 3:
				exit(0);
			default :
				printf("Enter valid choice");
				break;
		}
   }
}
