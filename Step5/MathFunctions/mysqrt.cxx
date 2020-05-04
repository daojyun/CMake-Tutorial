
#include <cmath>
#include <iostream>

#include "MathFunctions.h"

double mysqrt(double value) {
  std::cout << "[mysqrt:" << value << "]" << std::endl;
#if defined(HAVE_LOG) && defined(HAVE_EXP)
  double result = std::exp(std::log(value) * 0.5);
  std::cout << "Computing sqrt of " << value << " to be " << result
            << " using log and explicit" << std::endl;
#else
  double result = value;
#endif
  return result;
}
