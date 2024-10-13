#include <stdio.h>
#include <math.h>

int main(void)
{
   int n  = 12;
   float a = 0.0;
   float b = 60.0;

   float b_rad;
   b_rad = (M_PI * b) / 180;

   float sum = tan(a) + tan(b_rad);
   printf("Initial sum =: %f\n",sum);

   int i ;
   for (i = 5; i < 60; i = i + 5)
   {
       sum += 2 * tan(i * M_PI / 180.0);
       // sum = sum + 2 * tan(i * M_PI / 180);
   }

   printf("The value of the sum after the loop is: %f\n", sum);

   sum = ((b_rad - a)/(2 * n)) * sum;
   printf("The final value of the sum is: %f\n", sum);
   printf("The actual value is: %f\n", logf(2));

   float abs_diff = fabs(sum - log(2));
   float rel_diff = fabs(1 -(sum/logf(2)));

   printf("abs_diff = %f\n rel_diff = %f\n", abs_diff, rel_diff);

   return 0;

}
