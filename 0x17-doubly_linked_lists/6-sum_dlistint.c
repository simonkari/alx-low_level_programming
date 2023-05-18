#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node
 * @head: Head of the dlistint_t list.
 * @index: node to locate.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *node = head;
int sum = 0;
while (node)
{
sum += node->n;
node = node->next;
}
return (sum);
}
