#include <stdio.h>
#include <unistd.h>

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
int hour, minute;
char buffer[6];
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
snprintf(buffer, sizeof(buffer), "%02d:%02d\n", hour, minute);
write(1, buffer, 6);
}
}
}
