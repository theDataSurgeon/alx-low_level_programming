#include "lists.h"
/**
 * free_listint2 - function that frees
 *                 a listint_t list
 *
 * @head: pointer to head of struct listint_t type
 *
 * Return: what i want :)
 */
void free_listint2(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *b = NULL;

        if (head == NULL)
		return;
	a = *head;
	while (a != NULL)
	{
		b = a;
		a = a->next;
		free(b);
        }
	*head = NULL;
}
