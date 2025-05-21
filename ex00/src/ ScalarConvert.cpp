#include "../include/ScalarConvert.hpp"

// orthodox cannonical form

ScalarConvert::ScalarConvert() {}

ScalarConvert::ScalarConvert(const ScalarConvert &src) {}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &src) {}

ScalarConvert::~ScalarConvert() {}

// other constructor
ScalarConvert::ScalarConvert(const std::string &s) {}

// function

static void charIn(ScalarConvert &toFill) {}

static void intIn(ScalarConvert &toFill) {}

static void floatIn(ScalarConvert &toFill) {}

static void doubleIn(ScalarConvert &toFill) {}

void ScalarConvert::convert(const std::string &s) {
  ScalarConvert test;

  test._type;
  // 1 - Check type

  // 2 - convert string to defined type

  // 3 - Create the res

  void (*fill[4])(ScalarConvert &) = {
      charIn,
      intIn,
      floatIn,
      doubleIn,
  };

  // std::string type[] = { "CHAR", "INT", "FLOAT", "DOUBLE" };

  for (int i = 0; i < 4; i++) {
    if (test._type == i) {
      &test->*fill[i](s);
      return;
    }
  }
}

// by converting the input string as the type it represent i can use a
// construtor with multiple type to fill the data