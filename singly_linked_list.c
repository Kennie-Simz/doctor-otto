#include <stdio.h>
#include <stdlib.h>

/**
 * Creating a singly linked list and traversing through it
 * printing the list as output
 **/

struct node
{
	int data;
	struct node *next;
};

/**
 * function to traverse the list
 **/
void printList(struct node *n)
{
	while (n != NULL)
	{
		printf("%d \n", n->data);
		n = n->next;
	}
}

int main()
{
	/* initialize the data placeholders */
	struct node *head = NULL;
	struct node *second = NULL;
	struct node *third = NULL;
	struct node *fourth = NULL;

	/* allocate memory */
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = fourth;
	fourth->data = 4;
	fourth->next = NULL; /* end of list */

	printList(head);
	return 0;
}
