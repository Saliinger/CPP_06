#include "../include/ScalarConvert.hpp"

// orthodox cannonical form

ScalarConvert::ScalarConvert() {}

ScalarConvert::ScalarConvert(const ScalarConvert &src) {}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &src) {}

ScalarConvert::~ScalarConvert() {}

// function
static int getType(const std::string &s) {
  if (s.length() == 1)
    return 0;
  else if (1 == 0) {
    return 1;
  } else if (1 == 0) {
    return 2;
  } else if (1 == 0) {
    return 3;
  }
  return -1;
}

static void charIn(const std::string &s) {}

static void intIn(const std::string &s) {}

static void floatIn(const std::string &s) {}

static void doubleIn(const std::string &s) {}

void ScalarConvert::convert(const std::string &s) {
  int type = getType(s);

  void (*fill[4])(const std::string &) = {
      charIn,
      intIn,
      floatIn,
      doubleIn,
  };

  if (type < 4 && type >= 0) {
    fill[type](s);
    return;
  }
  std::cout << "Error: pizza!" << std::endl;
}