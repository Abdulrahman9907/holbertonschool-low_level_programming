#include <stdio.h>

struct Person {
char bro[20];
int age;
float height;
};

int main(void)
{
struct Person p1 = {"Alice", 25, 5.6};

printf("bro's name: %s\n", p1.bro);
printf("Age: %d\n", p1.age);
printf("Height: %.1f\n", p1.height);

p1.age = 26;
printf("New age: %d\n", p1.age);

return 0;
}
