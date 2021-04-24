#include <stdio.h>
#include <unistd.h>

int stack[15];
int input,i,j,k;
int var = -1;

int main()
{
	printf("\n\n Welcome to Stack \n\n");
	printf("To PUSH an element press 1\n");	
	printf("To POP an element press 2\n");
	printf("To EXIT press 3\n");
	printf("\n\n");
	

	
	while(1)
	{
		printf("Enter Input: \n");
		scanf("%d",&input);
		
		if (input == 1)
		{
			push();
		}
		else if (input == 2)
		{
			pop();
		}
		else if (input == 3)
		{
			break;
		}
		else
		{
			printf("Enter a valid input\n");
		}
	}
	display();
	return(0);	
}

void push()
{
	if (var>=15)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("Enter the elements you want to add: \n");
		scanf("%d", &i);
		var++;
		stack[var] = i;
	}
}
void pop()
{
	int j;
	if (var < 0)
	{
		printf("Stack Smashed\n");
	}
	else
	{
		printf("Enter the element you want to pop out\n");
		scanf("%d",&j);
		var--;
		stack[var] = j;
	}
}
void display()
{
	printf("Stack");
	for (k=var;k>=0;k--)
	{
		printf("%d\n",stack[k]);
	}
}
