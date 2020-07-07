#include <stdio.h>

/* print Fahr-Celsius Table */
main()
{
  float fahr;
  float celsius;

  for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
    celsius = ((5.0/9.0)*(fahr-32));
    printf("%3.0f %6.1f\n", fahr, celsius);
  }
}

