#include "dog.h"
#include <stdlib.h>

/**
* _strlen - calculates the length of a string
* @str: the string
*
* Return: the length of the string
*/
size_t _strlen(const char *str)
{
size_t len = 0;

while (str[len] != '\0')
len++;

return (len);
}

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to the new dog (dog_t), or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
size_t i; /* Declare the loop variable outside the loops */

if (name == NULL || owner == NULL)
return (NULL);

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

name_copy = malloc(_strlen(name) + 1);
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
for (i = 0; i <= _strlen(name); i++) /* Use the declared variable */
name_copy[i] = name[i];

owner_copy = malloc(_strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
for (i = 0; i <= _strlen(owner); i++) /* Reuse the same variable */
owner_copy[i] = owner[i];

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}
