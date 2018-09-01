#include <stdio.h>
 
int main()
{
  int n, first = 0, second = 1, next, c;
  int incremento;
 
  printf("Cuantos renglones quieres imprimir? \n");
  scanf("%d", &n);
  printf("Cuantos saltos quieres? ");
  scanf("%i", &incremento);
 
  for (c = 0; c < n; c+=incremento)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }
 
  return 0;
}