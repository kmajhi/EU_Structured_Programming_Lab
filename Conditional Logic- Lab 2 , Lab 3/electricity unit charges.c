#include <stdio.h>

int main() {
  int units;
  float bill;

  printf("Enter the electricity units: ");
  scanf("%d", &units);

  if (units <= 50) {
    bill = units * 0.5;
  } else if (units <= 150) {
    bill = 25 + ((units - 50) * 0.75);
  } else if (units <= 250) {
    bill = 100 + ((units - 150) * 1.2);
  } else {
    bill = 220 + ((units - 250) * 1.5);
  }

  bill = bill + (0.2 * bill); // add 20% surcharge

  printf("Total Electricity Bill: Rs. %.2f\n", bill);

  return 0;
}
