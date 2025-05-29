
#pragma once

#include <iostream>
#include <cstdlib>

class Base {
 public:
  // orthodox cannonical form
  Base();
  Base(const Base &src);
  Base &operator=(const Base &src);
  virtual ~Base();

  // functions
  static Base *generate();
  static void identify(Base *p);
  static void identify(Base &p);
};