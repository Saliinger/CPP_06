#pragma once

#include <iostream>

class ScalarConvert {
 public:
  // orthodox cannonical form
  ScalarConvert();
  ScalarConvert(const ScalarConvert &src);
  ScalarConvert &operator=(const ScalarConvert &srd);
  ~ScalarConvert();

  // function
  static void convert(const std::string &s);
};
