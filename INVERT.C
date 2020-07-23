#include<stdio.h>
#include<conio.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node * create(int, node*);
void display(node *);
node *invert(node *);
//node *del(node *,int);
//void search(node*);
void main()
{
	int n,pos;
	node *head=NULL;
	clrscr();
	printf("ENter the elements of NO\n");
	scanf("%d",&n);
	head=create(n,head);
	display(head);

       //	printf("\nEnter the position to be inserted ");
       //	scanf("%d",&pos);
       printf("\ninverted list is:");
	head=invert(head);
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
			head->next=NULL;
			newnode=head;
			}
			else
			{
			newnode->next=(node*)malloc(sizeof(node));
			newnode=newnode->next;
			newnode->data=val;
			newnode->next=NULL	;
			}
		}
		return(head);
	}
		void display(node *head)
		{
		node *temp=head;
		printf("\n inverted list:");
		while(temp!=NULL)
		{


			printf("%d\t",temp->data);
			temp=temp->next;
		}
		}

node *invert(node *head)
{
	node *p,*q,*r;
	p=head;
	q=NULL;
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
return(head);
}













