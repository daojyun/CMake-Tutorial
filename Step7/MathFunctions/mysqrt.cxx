
#include <cmath>
#include <iostream>

#include "MathFunctions.h"
#include "Table.h"

double mysqrt(double value) {
  if (value <= 0) return 0;

  // use the table to help find an initial value
  double result = value;
  if (value >= 1 && value < 10) {
    std::cout << "Use the table to help find an initial value " << std::endl;
    ;
    result = sqrtTable[static_cast<int>(value)];
  }

  // do ten iterations
  for (int i = 0; i < 10; ++i) {
    if (result <= 0) result = 0.1;

    double delta = value - (result * result);
    result = result + 0.5 * delta / result;
    std::cout << "Computing sqrt of " << value << " to be " << result
              << std::endl;
  }
  return result;
}
