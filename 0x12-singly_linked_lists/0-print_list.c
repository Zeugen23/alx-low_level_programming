#include <stdio.h>
#include "lists.h"

/**
* print_list prints all the elements of a linked list
* @h: name of the list
* Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
   size_t r = 0;


   while (h)
   {
       if (h->str == NULL)
       {
           printf("[0] (nil)\n");
       }
       else
       {
       printf("[%u] %s\n", h->len, h->str);
       }
       r++;
       h = h->next;
   }
   return (r);
}
