#include<stdio.h>
#include<conio.h>
typedef struct dnode
{
	struct dnode *prev;
	int data;
	struct dnode *next;
}dnode;
dnode * create(dnode*,int);
void display(dnode *);
dnode *insert(dnode *,int);
dnode *del(dnode *,int);
void main()
{
	int n,pos,pos1;
	dnode *head=NULL;
	clrscr();
	printf("ENter the elements of NO\n");
	scanf("%d",&n);
	head=create(head,n);
	display(head);
	printf("\n enter the position to insert the node");
	scanf("%d",&pos);
	head=insert(head,pos);
	display(head);
	printf("\n enter the position to delete the node");
	scanf("%d",&pos1);
	head=del(head,pos1);
	display(head);
	getch();
}
dnode * create(dnode *head,int n)
{
	dnode *newnode,*temp;
	int val,i;
	for(i=0;i<n;i++)
	{
		printf("\n enter the element");
	scanf("%d",&val);
		if(head==NULL)
		{
			head=(dnode *)malloc(sizeof(dnode));
			head->next=head->prev=NULL;
				head->data=val;
			temp=newnode=head;
		}
		else
		{
			newnode->next=(dnode *)malloc(sizeof(dnode));
			newnode=newnode->next;
			newnode->prev=temp;
			newnode->data=val;
			newnode->next=NULL;
			temp=temp->next;
		 }
	}
		 return(head);
}

void display(dnode *head)
{
       dnode *temp=head;
       while(temp!=NULL)
       {
	printf("\t%d",temp->data);
	temp=temp->next;
	}
}

dnode *insert(dnode *head,int pos)
{
	int i;
	dnode *temp,*newnode,*temp1;
	newnode=(dnode*)malloc(sizeof(dnode));
	newnode->next=newnode->prev=NULL;
	printf("\n enter element to be inserted");
	scanf("%d",&newnode->data);
	if(pos==1)
	{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
	else
	{
		temp=head;
		for(i=1;i<pos-1;i++)
			temp=temp->next;
		temp1=temp->next;
		newnode->next=temp1;
		newnode->prev=temp;
		temp1->prev=newnode;
		temp->next=newnode;
	}
	return(head);
}

dnode *del(dnode *head,int pos)
{
	int i;
	dnode *temp,*temp1;
	if(pos==1)
	{
		temp=head;
		head=h ead->next;
		head->prev=NULL;
		free(temp);
	}
	else
	{
		temp=head;
		for(i=1;i<pos-1;i++)
			temp=temp->next;
		temp1=temp->next;
		(temp1->next) ->prev=temp;
		temp->next=temp1->next;
		free(temp1);

	}
	 return(head);
}
















