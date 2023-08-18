/* Input:
p, principal amount
t, time period in years
r, annual rate of interest
Output:
simple interest = p*t*r */


# include <stdio.h>

int main() {

   int p, r, t;
   float s;

   printf("Enter the principal:");
   scanf("%d", &p);

   printf("Enter rate of interest per year:");
   scanf("%d", &r);

   printf("Enter time period in years:");
   scanf("%d", &t);

   s = p * t * r/100;

   printf("The simple interest is: %f", s);

}
  
