#include <stdio.h>
#include <stdlib.h>



int main() {
  int num,                                      
      x,        
      y;    

  printf("Digite um natural: ");
  scanf("%d", &num);

  x = num;
  y = 0;

  while (x != 0) {
    y = y * 10 + x % 10;  
    x = x / 10;                    
  }

  if (y == num)
    printf("%d e um numero palindromo\n", num);
  else
    printf("%d nao e um numero palindromo\n", num);

  return 0;
}
