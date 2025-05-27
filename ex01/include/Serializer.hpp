#pragma once

#include <iostream>

struct Data {
  std::string from;
  std::string to;
  std::string message;
};

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