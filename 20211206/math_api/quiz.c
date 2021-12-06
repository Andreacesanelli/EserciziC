#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int x = 22;
int y = 121;


int quiz(int x, int y)  {
  int r;
  if (x<0) x = -x;
  if (y<0) y = -y;
while (y) {
r = x % y;
x = y;
y = r;
}


    return x;

    }    
