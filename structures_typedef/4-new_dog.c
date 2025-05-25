#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

name_copy = malloc(strlen(name) + 1);
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
for (i = 0; i <= strlen(name); i++) /* Use the declared variable */
name_copy[i] = name[i];

owner_copy = malloc(strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
for (i = 0; i <= strlen(owner); i++) /* Reuse the same variable */
owner_copy[i] = owner[i];

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}
