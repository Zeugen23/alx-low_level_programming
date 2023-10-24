#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 wq
 * add_node- a new node should be added at the beginning of a linked list
 * @head: head of a list_t list
 * @str: nen value to add in the node
 *
 * Return: the new element, or NULL if it not succesful
 */
list_t *add_node(list_t **head, const char *str)
{
 list_t *new;
 size_t i = 0;

 while (str[i])
 i++;

 new = malloc(sizeof(list_t));
 if (!new)
 return (NULL);

 new->str = strdup(str);
 new->len = i;
 new->next = (*head);
 (*head) = new;

 return (*head);
}

