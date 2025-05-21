#include "./include/ScalarConvert.hpp"

int main(int ac, char **av) {
  if (ac == 2) {
    ScalarConvert res;
    res.convert(av[1]);
  } else
    std::cout << "Error: Too many argument!" << std::endl;
  return 0;
}