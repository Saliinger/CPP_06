#include "../include/Serializer.hpp"

// orthodox cannonical form
Serializer::Serializer() {}

Serializer::Serializer(const Serializer &src) { (void)src; }

Serializer &Serializer::operator=(const Serializer &src) {
  (void)src;
  return *this;
}

Serializer::~Serializer() {}

// functions
uintptr_t Serializer::serialize(Data *ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {
  return reinterpret_cast<Data *>(raw);
}