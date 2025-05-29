#include <stdio.h>

// Using typedef to create aliases for basic types
typedef int Age;
typedef float Temperature;
typedef char* String;

// Using typedef with structures
typedef struct {
String name;
Age age;
Temperature bodyTemp;
} Person;

// Using typedef with function pointers
typedef int (*MathOperation)(int, int);

// Function that matches our typedef
int add(int a, int b) {
return a + b;
}

int multiply(int a, int b) {
return a * b;
}

int main(void) {
// Using our typedef aliases instead of basic types
Age studentAge = 20;
Temperature roomTemp = 23.5;
String greeting = "Hello, World!";

printf("Student age: %d years\n", studentAge);
printf("Room temperature: %.1f°C\n", roomTemp);
printf("Greeting: %s\n", greeting);

// Using typedef with structures
Person student = {"Alice", 20, 36.6};
printf("\nPerson details:\n");
printf("Name: %s\n", student.name);
printf("Age: %d\n", student.age);
printf("Body temperature: %.1f°C\n", student.bodyTemp);

// Using typedef with function pointers
MathOperation operation1 = add;
MathOperation operation2 = multiply;

printf("\nMath operations:\n");
printf("5 + 3 = %d\n", operation1(5, 3));
printf("5 * 3 = %d\n", operation2(5, 3));

return 0;
}
