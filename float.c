#include <stdio.h>

int main() {
  float subtotal;
  float tax;
  printf("What is the subtotal? " );
  scanf("%f", &subtotal);
  printf("What is the tax?");  
  scanf("%f" , &tax);					   
  printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  return 0;
}
