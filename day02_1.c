#include <stdio.h>
#include <limits.h>

const unsigned int table[ROW][COL] = TABLE;
unsigned int sum = 0;

int main(int argc, char **argv) {
  for(int i = 0; i<ROW; i++)
  {
    unsigned int high = 0;
    unsigned int low = INT_MAX;
    for(int k = 0; k<COL; k++)
    {
      if(table[i][k] > high)
        high = table[i][k];
      if(table[i][k] < low)
        low = table[i][k];
    }
    sum += (high - low);
  }
  
  printf("%d\n", sum);
  
  return 0;
}
