#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

/**
 * _push - inserts a node at the head of a list and an int
 * @node: pointer to pointer
 * @head_ref: head
 * @new_data: new head
 *
 **/

void _push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	/* input data */
	new_node->data = new_data;

	/* make the next f new node as head */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/**
 * _insertAfter - inserts a node after a previous node
 * @node: pointer
 * @prev_node: previous node
 * @new_data: new data
 *
 **/

void _insertAfter(struct Node* prev_node, int new_data)
{
	/* first check if prev_node is empty */
	if (prev_node == NULL)
	{
		printf("Previous node is not supposed to be empty!");
		return;
	}

	/*allocate new node */
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;

	/* make the next of new_node as the next of prev_node */
	new_node->next = prev_node->next;

	/* move the next of the prev_node as the new node */
	prev_node->next = new_node;
}

/**
 * _append - adds a node at the end
 * @head_ref: beginning of traversal
 * @new_data: new item to be filled in
 *
 **/
void _append(struct Node** head_ref, int new_data)
{
	/* allocate e node */
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	struct Node *last = *head_ref;

	/* input data */
	new_node->data = new_data;

	/* new node is going to be e last node so make it NULL */
	new_node->next = NULL;

	/* if linked list is empty, tehn make the new node as e head */
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}
	
	/* else traverse till the last node */
	while (last->next != NULL)
		last = last->next;

	/* change the next of the last node */
	last->next = new_node;
	return;
}

/**
 * printList - prints tehe content of the linked list from the start to the last
 * @node: items to be printed
 *
 **/
void _printList(struct Node *node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}

/* Main Programme - testing out the functions above */

int main()
{
	/* start with empty list */
	struct Node *head = NULL;

	/* insert any number to create beginning of list */
	_append(&head, 7);

	/* insert another number at the beginning */
	_push(&head, 1);

	/* insert another number at the beginning */
	_push(&head, 20);

	/* insert another number at the end */
	_append(&head, 10);

	/*insert a number after a previous number at given position */
	_insertAfter(head->next, 4);

	printf("\nCreated linked list is: ");
	_printList(head);
	printf("\n");
	printf("\n");

	return 0;
}
