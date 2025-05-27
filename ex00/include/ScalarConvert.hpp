#pragma once

#include <iostream>

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
