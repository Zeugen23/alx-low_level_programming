#include <stdlib.h>
#include "lists.h"

/**
* list_len - go back to the number of elements in a linked list.
* @h: name of the list
* Return: the number of element.
*/
size_t list_len(const list_t *h)
{
   size_t r = 0;


   while (h)
   {
       r++;
       h = h->next;
   }
   return (r);
}

