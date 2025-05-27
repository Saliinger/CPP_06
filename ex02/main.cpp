#include "include/A.hpp"
#include "include/B.hpp"
#include "include/Base.hpp"
#include "include/C.hpp"

int main() {
  Base *random;

  srand(time(NULL));  // init rand for the generate function

  random = Base::generate();
  Base random2 = *random;
  Base::identify(random);
  Base::identify(&random2);
  return 0;
}