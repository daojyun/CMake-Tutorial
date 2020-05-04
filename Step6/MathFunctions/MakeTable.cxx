
#include <cmath>
#include <fstream>

int main(int argc, char** argv) {
  std::ofstream output{argv[1]};

  output << "double sqrtTable[] = {0";
  for (int index = 1; index < 10; ++index) output << "," << std::sqrt(index);
  output << "};";

  return 0;
}
