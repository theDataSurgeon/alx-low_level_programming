#include "lists.h"
/**
 * sum_listint - function that returns the sum
 *               of all the data (n) of a
 *               listint_t linked list
 *
 * @head: pointer to head node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
        unsigned int sum;

        if (head == NULL)
                return (0);
        sum = 0;
        while (head != NULL)
        {
                sum += head->n;
                head = head->next;
        }
        return (sum);
}
