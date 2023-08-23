#include <stdio.h>
#include <math.h>


int main() {
  int i, count = 0;
  
  for (i = 2; i <= 1000; i++) {
	  if (primo(i)){

        if (count > 0 && count % 10 == 0) {
                printf("\n");
            }
        
		if (i < 10) {
                printf(" 00%d ", i);
            } else if (i < 100) {
                printf(" 0%d ", i);
            } else {
                printf(" %d ", i);
            }
		
		
			
		count++;
	  }
  }
  return 0;
}