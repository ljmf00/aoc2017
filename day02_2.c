#include <stdio.h>

#define min(a,b) (b < a) ? b : a
#define max(a,b) (a < b) ? b : a

const unsigned int table[ROW][COL] = TABLE;
unsigned int sum = 0;

int main(int argc, char **argv) {
  for(int i = 0; i<ROW; i++)
    for(int k = 0; k<COL; k++)
      for(int j = 0; j<COL; j++)
        if(j!=k)
        {
          const unsigned int mi = min(table[i][k], table[i][j]), ma = max(table[i][k], table[i][j]);
          if(ma%mi == 0)
            sum+=(ma/mi);
        }

  printf("%d\n", sum/2);
  return 0;
}
