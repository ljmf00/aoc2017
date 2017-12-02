#include <stdio.h>
#include <string.h>

const char* input = INPUT;
unsigned int sum = 0;

int main(int argc, char **argv) {
  
  const unsigned int len = strlen(input);
	
	for(int i=0;i<len;i++) {
	  const unsigned int k = (i+len/2) % len;
	  if(input[i] == input[k])
			sum += input[i]-'0';
	}

  printf("%d\n", sum);
  
  
  return 0;
}
