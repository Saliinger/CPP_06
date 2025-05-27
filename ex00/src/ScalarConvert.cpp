#include "../include/ScalarConvert.hpp"

// orthodox cannonical form

ScalarConvert::ScalarConvert() {}

ScalarConvert::ScalarConvert(const ScalarConvert &src) { (void)src; }

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &src) {
  (void)src;
  return *this;
}

ScalarConvert::~ScalarConvert() {}

// helper function

static bool isChar(const std::string &s) {
  if (s.length() == 1 && !std::isdigit(s[0])) return true;
  return false;
}

static bool isInt(const std::string &s) {
  char *end;
  int i;

  i = std::strtol(s.c_str(), &end, 10);
  if (*end == '\0') {
    if (i <= std::numeric_limits<int>::max() &&
        i >= std::numeric_limits<int>::min()) {
      return true;
    }
  }
  return false;
}

static bool isFloat(const std::string &s) {
  char *end;

  std::strtof(s.c_str(), &end);
  return *end == 'f';
}

static bool isDouble(const std::string &s) {
  char *end;

  std::strtod(s.c_str(), &end);
  return *end == '\0';
}

// get the type of the scalar variable
static int getType(const std::string &s) {
  if (isChar(s))
    return 0;
  else if (isFloat(s)) {  // float
    return 2;
  } else if (isDouble(s)) {  // double
    return 3;
  } else if (isInt(s)) {  // int
    return 1;
  }
  return -1;
}
// todo check all type this is trash

// converters
static void charIn(const std::string &s) {
  char c = s[0];  // base
  int i = static_cast<int>(c);
  float f = static_cast<float>(c);
  double d = static_cast<double>(c);

  {
    if (std::isprint(c))
      std::cout << "char: " << c << std::endl;
    else
      std::cout << "char: impossible" << std::endl;
  }
  {
    if (i <= std::numeric_limits<int>::max() &&
        i >= std::numeric_limits<int>::min())
      std::cout << "int: " << std::to_string(i) << std::endl;
    else
      std::cout << "int: impossible" << std::endl;
  }
  {
    if (f <= std::numeric_limits<float>::max() &&
        f >= std::numeric_limits<float>::min())
      std::cout << "float: " << std::to_string(f) << "f" << std::endl;
    else
      std::cout << "float: impossible" << std::endl;
  }
  {
    if (d <= std::numeric_limits<double>::max() &&
        d >= std::numeric_limits<double>::min())
      std::cout << "double: " << std::to_string(d) << std::endl;
    else
      std::cout << "double: impossible" << std::endl;
  }
}

static void intIn(const std::string &s) {
  std::vector<std::string> res;

  int i = std::stoi(s);  // base
  char c = static_cast<char>(i);
  float f = static_cast<float>(i);
  double d = static_cast<double>(i);

  {
    if (std::isprint(c))
      std::cout << "char: " << c << std::endl;
    else
      std::cout << "char: impossible" << std::endl;
  }
  {
    if (i <= std::numeric_limits<int>::max() &&
        i >= std::numeric_limits<int>::min())
      std::cout << "int: " << std::to_string(i) << std::endl;
    else
      std::cout << "int: impossible" << std::endl;
  }
  {
    if (i <= std::numeric_limits<float>::max() &&
        i >= std::numeric_limits<float>::min())
      std::cout << "float: " << std::to_string(f) << "f" << std::endl;
    else
      std::cout << "float: impossible" << std::endl;
  }
  {
    if (i <= std::numeric_limits<double>::max() &&
        i >= std::numeric_limits<double>::min())
      std::cout << "double: " << std::to_string(d) << std::endl;
    else
      std::cout << "double: impossible" << std::endl;
  }
}

static void floatIn(const std::string &s) {
  std::vector<std::string> res;

  float f = std::stof(s);  // base
  char c = static_cast<char>(f);
  int i = static_cast<int>(f);
  double d = static_cast<double>(f);

  {
    if (std::isprint(c))
      std::cout << "char: " << c << std::endl;
    else
      std::cout << "char: impossible" << std::endl;
  }
  {
    if (f <= std::numeric_limits<int>::max() &&
        f >= std::numeric_limits<int>::min())
      std::cout << "int: " << std::to_string(i) << std::endl;
    else
      std::cout << "int: impossible" << std::endl;
  }
  {
    if (f <= std::numeric_limits<float>::max() &&
        f >= std::numeric_limits<float>::min())
      std::cout << "float: " << std::to_string(f) << "f" << std::endl;
    else
      std::cout << "float: impossible" << std::endl;
  }
  {
    if (f <= std::numeric_limits<double>::max() &&
        f >= std::numeric_limits<double>::min())
      std::cout << "double: " << std::to_string(d) << std::endl;
    else
      std::cout << "double: impossible" << std::endl;
  }
}

static void doubleIn(const std::string &s) {
  std::vector<std::string> res;

  double d = std::stod(s);  // base
  char c = static_cast<char>(d);
  int i = static_cast<int>(d);
  float f = static_cast<float>(d);

  {
    if (std::isprint(c))
      std::cout << "char: " << c << std::endl;
    else
      std::cout << "char: impossible" << std::endl;
  }
  {
    if (d <= std::numeric_limits<int>::max() &&
        d >= std::numeric_limits<int>::min())
      std::cout << "int: " << std::to_string(i) << std::endl;
    else
      std::cout << "int: impossible" << std::endl;
  }
  {
    if (d <= std::numeric_limits<float>::max() &&
        d >= std::numeric_limits<float>::min())
      std::cout << "float: " << std::to_string(f) << "f" << std::endl;
    else
      std::cout << "float: impossible" << std::endl;
  }
  {
    if (d <= std::numeric_limits<double>::max() &&
        d >= std::numeric_limits<double>::min())
      std::cout << "double: " << std::to_string(d) << std::endl;
    else
      std::cout << "double: impossible" << std::endl;
  }
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
  if (s == "<< inf" || s == "<< inff" || s == "inf" || s == "inff") {
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
  std::cout << "Error: pizza! " << type << std::endl;
}