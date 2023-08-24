#include <stdio.h>
#include <math.h>

// o divisor proprio informa o menor numero diferente de 1 que divide n
int min_divisor_proprio(int n){ 
  int divisor = 2;
  float raiz = sqrt(n);
  while (divisor <= raiz && n % divisor != 0) {
    divisor++;
  }
  if (divisor <= raiz) {
    return divisor;
  } else {
    return n;
  }
}


int primo(int n) {
  int m;
  m = min_divisor_proprio(n);
  if (m == n) {
    return 1;  // n é primo
  } else {
    return 0;  // n não é primo
  }
}

int main() {
  int i, count = 0;
  
  printf("\n\tNumeros primos entre 2 e 1000\n\n");

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
  printf("\n\n");
  return 0;
}