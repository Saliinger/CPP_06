#pragma once

#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <cctype>
#include <cmath>

class ScalarConvert {
 private:
  // orthodox cannonical form
  ScalarConvert();
  ScalarConvert(const ScalarConvert &src);
  ScalarConvert &operator=(const ScalarConvert &srd);
  ~ScalarConvert();

 public:
  // function
  static void convert(const std::string &s);
};
