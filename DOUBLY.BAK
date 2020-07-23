#include<stdio.h>
#include<conio.h>

typedef struct dnode
{
	struct dnode *prev;
	int data;
	struct dnode *next;
}dnode;
dnode * create(int, node*);
void display(node *);
dnode *insert(node *,int);
node * del(node *,int);
//void search(node*);
void main()
{
	int n,pos;
	dnode *head=NULL;
	clrscr();
	printf("ENter the elements of NO\n");
	scanf("%d",&n);
	head=create(n,head);
	display(head);

	printf("\nEnter the position to be inserted ");
	scanf("%d",&pos);
	head=insert(head,pos);
	display(head);
      //	head=del(head,pos);
      //display(head);
      //	search(head);
	getch();
}
	node *create(int n,node *head)
	{
		int val,i;
		node *newnode;
		for(i=0;i<n;i++)
		{
			printf("Enter the element\n");
			scanf("%d",&val);
			if(head==NULL)
			{
			head=(node*)malloc(sizeof(node));
			head->data=val;
			head->next=head;
			newnode=head;
			}
			else
			{
			newnode->next=(node*)malloc(sizeof(node));
			newnode=newnode->next;
			newnode->data=val;
			newnode->next=head	;
			}
		}
		return(head);
	}
		void display(node *head)
		{
		node *temp=head;
		printf("\nlinked list:");
		do
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		} while(temp!=head);
		}

       dnode *insert(node *head,int pos)
	{
		node *newnode,*temp;
		int val,i;
		printf("enter the element");
		scanf("%d",&val);
		temp=head;
		newnode=(node *)malloc(sizeof(node));
		newnode->data=val;
		newnode->next=NULL;
		if(pos==1)
		{
			while(temp->next!=head)
				temp=temp->next;
				newnode->next=head;
				temp->next=newnode;
				head=newnode;
		}
		else
		{
			for(i=1;i<pos-1;i++)
			temp=temp->next;
				newnode->next=temp->next;
				temp->next=newnode;
		}
			return(head);
	}

    /*node *del(node *head, int pos)
    {
       int i;
       node *temp,*temp1;
       if(pos==1)
       {
       temp1=head;
       head=head->next;
       free(temp1);
       }
       else
       {
       temp=head;
       for(i=1;i<pos-1;i++)
       temp=temp->next;
       temp1=temp->next;
       temp->next=temp1->next;
       free(temp1);
       }
       return(head);
       }
    void search(node *head)
    {
	node *temp=head;
	int i,key,pos=1;
	printf("Enter the key for search");
	scanf("%d",&key);
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
		printf("Element fund %d",pos);
		break;
		}
		else
		{
		temp=temp->next;
		pos=pos++;
		}
		}
	}*/

