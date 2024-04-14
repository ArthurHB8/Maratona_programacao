#include <stdio.h>

int main()
{
  int n, in1 = 0, in2 = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    int pressed;

    scanf("%d", &pressed);

    if (pressed == 1)
    {
      if (in1 == 1)
      {
        in1 = 0;
      }
      else
      {
        in1 = 1;
      }
    }
    else
    {
      if (pressed == 2)
      {
        if (in1 == 1)
        {
          in1 = 0;
        }
        else
        {
          in1 = 1;
        }
        if (in2 == 1)
        {
          in2 = 0;
        }
        else
        {
          in2 = 1;
        }
      }
    }
  }

  printf("%d\n%d", in1, in2);

  return 0;
}