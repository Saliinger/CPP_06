#include "../include/ScalarConvert.hpp"

// orthodox cannonical form

ScalarConvert::ScalarConvert() {}

ScalarConvert::ScalarConvert(const ScalarConvert &src) {}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &src) {}

ScalarConvert::~ScalarConvert() {}

// helper function

// get the type of the scalar variable
static int getType(const std::string &s) {
  if (s.length() == 1 && !std::isdigit(s[0]))
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

// converters
static void charIn(const std::string &s) {
  std::vector<std::string> res;

  char c = s[0];  // base
  int i = static_cast<int>(c);
  float f = static_cast<float>(c);
  double d = static_cast<double>(c);

  res.push_back("char: " + std::to_string(c));
  res.push_back("int: " + std::to_string(i));
  res.push_back("float: " + std::to_string(f) + "f");
  res.push_back("double: " + std::to_string(d));

  for (std::string n : res) std::cout << n << std::endl;
}

static void intIn(const std::string &s) {
  std::vector<std::string> res;

  int i = std::stoi(s);  // base
  char c = static_cast<char>(i);
  float f = static_cast<float>(i);
  double d = static_cast<double>(i);

  res.push_back("char: " + std::to_string(c));
  res.push_back("int: " + std::to_string(i));
  res.push_back("float: " + std::to_string(f) + "f");
  res.push_back("double: " + std::to_string(d));

  for (std::string n : res) std::cout << n << std::endl;
}

static void floatIn(const std::string &s) {
  std::vector<std::string> res;

  float f = std::stof(s);  // base
  char c = static_cast<char>(f);
  int i = static_cast<int>(f);
  double d = static_cast<double>(f);

  res.push_back("char: " + std::to_string(c));
  res.push_back("int: " + std::to_string(i));
  res.push_back("float: " + std::to_string(f) + "f");
  res.push_back("double: " + std::to_string(d));

  for (std::string n : res) std::cout << n << std::endl;
}

static void doubleIn(const std::string &s) {
  std::vector<std::string> res;

  double d = std::stod(s);  // base
  char c = static_cast<char>(d);
  int i = static_cast<int>(d);
  float f = static_cast<float>(d);

  res.push_back("char: " + std::to_string(c));
  res.push_back("int: " + std::to_string(i));
  res.push_back("float: " + std::to_string(f) + "f");
  res.push_back("double: " + std::to_string(d));

  for (std::string n : res) std::cout << n << std::endl;
}

// main function
void ScalarConvert::convert(const std::string &s) {
  // special case
  if (s == "nan" || s == "nanf") {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
    return;
  }
  if (s == "+inf" || s == "+inff" || s == "inf" || s == "inff") {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: inff" << std::endl;
    std::cout << "double: inf" << std::endl;
    return;
  }
  if (s == "-inf" || s == "-inff") {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
    return;
  }

  // other case
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