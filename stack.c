#include<stdio.h>
#include<stdlib.h>
int a[20];
int size=20;
main()
{	int top=-1,choice,item,c,i;
	do
	{
	puts("Press the operation to perform\n1:Push\n2:Pop\n3:Display");
	scanf("%d",&choice);
	switch(choice)
	{	case 1: if (top>=size-1)
			{ 	printf("Stack overflow");
			}
			else
			{	printf("Enter the element to add\n");
				scanf("%d",&item);
				top+=1;
				a[top]=item;
				printf("Element is pushed:%d\n",item);
				break;
			}
		case 2: if(top<0)
				puts("Stack underflow");
			else
			{	
				item=a[top];
				top-=1;
				printf("Element is popped:%d\n",item);
				break;
			}
		case 3: if (top>=size-1)
				{printf("Stack overflow");
					break;}
 			if(top<0)
				{puts("Stack underflow");
					break;}
			
			for(i=0;i<top+1;i++)
				{printf("%d\t",a[i]);
				}
			break;
	}
	puts("press \n1:Continue\n2:stop\n");
	scanf("%d",&c);
	}
	while(c!=2);
}

