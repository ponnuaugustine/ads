//implement queue operations

#include<stdio.h>
int a[50],front=-1,rear=-1,n,i;
void enqueue()
{
	int item;
	if(rear==n-1)
	{
		printf("Queue is full");
	}
	else
	{
		front=0;
		rear++;
		printf("Enter the element to be inserted:");
		scanf("%d",&item);
		a[rear]=item;
	}
	printf("\nQUEUE:");
		for(i=front;i<=rear;i++)
		{
			printf("%d ",a[i]);
		}
}
void dequeue()
{
	if(front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		int removed=a[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front++;
		}
		printf("%d is removed",removed);
	}
}
void display()
{
	if(rear==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("front=%d",a[front]);
		printf("rear=%d",a[rear]);
	}
}
int main()
{
	int ch;
	printf("Enter the size:");
	scanf("%d",&n);
	do
	{
	printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		enqueue();
		
		break;
		
		case 2:
		dequeue();
		break;
		
		case 3:
		display();
		break;
		
		case 4:
		break;
		
		default:
		printf("Invalid choice");
	}
	}while(ch!=4);
}

