#include <stdio.h>

int main()
{
  int numero, maior = 0;
  scanf("%d", &numero);

  while (numero != 0)
  {

    if (numero > maior)
    {
      maior = numero;
    }
    scanf("%d", &numero);
  }

  printf("%d\n", maior);

  return 0;
}
