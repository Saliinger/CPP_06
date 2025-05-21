#pragma once

#include <iostream>

enum type {
  CHAR,
  INT,
  FLOAT,
  DOUBLE,
};

class ScalarConvert {
 private:
  char _c;
  int _d;
  float _f;
  double _d;
  int _type;

 public:
  // orthodox cannonical form
  ScalarConvert();
  ScalarConvert(const ScalarConvert &src);
  ScalarConvert &operator=(const ScalarConvert &srd);
  ~ScalarConvert();

  // other constructor
  ScalarConvert(const std::string &s);

  // function
  static void convert(const std::string &s);
};