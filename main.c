#include <stdio.h>
#include <stdlib.h>

int eng();
void wiper();

int main()
{
    int a, j;
    while(1)
    {
    a = eng();
    while(a)
    {
        if(kbhit())
          break;
        else
         wiper();
    }
    if(a)
      continue;
    else
      printf("\nSystem is OFF\n");
 }
    return 0;
}
