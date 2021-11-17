#include "lists.h"

/**
 * free_listint_safe - Free the list and put NULL in the head
 * @head: Head of the list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **head)
{
size_t i = 0;
listint_t *temp;

if (head == NULL)
return (i);

while (*head != NULL)
{
temp = *head;
*head = temp->next;
free(temp);
i++;
}
*head = NULL;

return (i);
}
