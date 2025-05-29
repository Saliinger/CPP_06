#pragma once

#include <iostream>
#include <stdint.h>
#include "Data.hpp"


class Serializer {
 private:
  // orthodox cannonical form
  Serializer();
  Serializer(const Serializer &src);
  Serializer &operator=(const Serializer &src);
  ~Serializer();

 public:
  // functions
  static uintptr_t serialize(Data *ptr);
  static Data *deserialize(uintptr_t raw);
};
