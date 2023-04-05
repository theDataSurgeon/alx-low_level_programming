#include "lists.h"

/**
 * *add_nodeint- adds new node at beginning
 *               of a listint_t list
 *
 * @head: listint_t type of node struct pointer to head
 * @n: const int type
 * Return: result
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *a = NULL;
	
	a = malloc(sizeof(listint_t));
        if (a == NULL)
                return (NULL);
        a->n = n;
        a->next = *head;
        *head = a;
        return (*head);
}
