#include "lists.h"

/**
 * get_dnodeint_at_index - Locates the node
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
while (current != NULL && index != 0)
{
current = current->next;
index--;
 }
return current;
}
