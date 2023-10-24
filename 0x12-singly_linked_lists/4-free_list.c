#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
 list_t *current = head;
 list_t *next;

 while (current != NULL)
 {
 temp = head->next;
 free(head->str);
 free(head);
 head = temp;
 }
}

