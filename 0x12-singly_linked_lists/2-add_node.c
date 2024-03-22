#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* _strlen - fxn return the len of a str.
* @s : s is a char
* Return: val is i
*/
int _strlen(const char *s)
{
   int i = 0;


   while (s[i] != '\0')
   {
       i++;
   }
   return (i);
}


/**
* add_node - a list_t list.
* @head: head of a list_t list.
* @str: value to insert into element.
* Return: the no of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
   list_t *add;


   add = malloc(sizeof(list_t));
   if (add == NULL)
       return (NULL);
   add->str = strdup(str);


   add->len = _strlen(str);
   add->next = *head;
   *head = add;


   return (add);
}
