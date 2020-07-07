#include <stdio.h>

/* print Far-Cel table
 * for fahr = 0, 20, ..., 300 */
main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower =  0.0;
  upper = 300.0;
  step = 20.0;

  fahr = lower;
  printf("%s\t%s\n", "fahrenheit", "celsius");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0); 
    printf("%10.0f\t%7.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  printf("\n");

  celsius = lower;
  printf("%s\t%s\n", "celsius", "fahrenheit");
  while (celsius <= upper) {
    fahr = (celsius / (5.0/9.0)) + 32.0;
    printf("%7.0f\t%10.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
