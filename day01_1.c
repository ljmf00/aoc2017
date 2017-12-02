#include <stdio.h>
#include <string.h>

const char* input = INPUT;
unsigned int sum = 0;

int main(int argc, char **argv) {
  
  const unsigned int len = strlen(input)-1;
	
	for(int i=0;i<len;i++)
		if(input[i] == input[i+1])
			sum += input[i]-'0';

	if(input[0]==input[len])
	  sum+=input[0]-'0';

  printf("%d\n", sum);
  
  return 0;
}
