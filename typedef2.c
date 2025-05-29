#include <stdio.h>

struct point {
int x;
int y;
};

struct point my_point = { 3, 7 };
struct point *p = &my_point;

int main(void) {
printf("Direct access: x = %d, y = %d\n", my_point.x, my_point.y);
printf("Pointer access: x = %d, y = %d\n", p->x, p->y);
printf("Pointer access (alternative): x = %d, y = %d\n", (*p).x, (*p).y);
return 0;
}
