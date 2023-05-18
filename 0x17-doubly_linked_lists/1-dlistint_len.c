#include "lists.h"

/**
 * dlistint_len - returnsnumber of elements.
 * @h: pointer to the list.
 * Return: The number of nodes.
 **/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *node = h;
size_t cont = 0;

while (node)
{
cont++;
node = node->next;
}

return (cont);
}
