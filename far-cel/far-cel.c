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
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0); 
    printf("%4.0f\t%5.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
