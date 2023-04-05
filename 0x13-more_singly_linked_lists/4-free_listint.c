#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to struct of listint type
 * Return: Success
*/

void free_listint(listint_t *head)
{
        listint_t *ab = NULL;

        while (head != NULL)
        {
                ab = head;
                head = head->next;
                free(ab);
        }
}
