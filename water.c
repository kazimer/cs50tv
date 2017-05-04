#include <cs50.h>
#include <stdio.h>

int main (void)
{
int v;
int s;
do
{
  //v = get_int();
  printf("Minutes:"); 
  v = get_int();
  //printf("%i\n", v);
}
while (v < 0);
s = v * 12; //Calculates bottles of water per minute
  printf("Bottles: %i\n", s);
}
