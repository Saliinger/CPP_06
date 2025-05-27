#include "include/Serializer.hpp"

int main() {
  Data *send = new Data;
  Data *unserialize;
  uintptr_t address;

  send->from = "me";
  send->to = "you";
  send->message = "hello word";

  std::cout << "this is the data before serialazation\n"
            << send->from << "\n"
            << send->to << "\n"
            << send->message << std::endl;

  address = Serializer::serialize(send);

  std::cout << "this is the address: 0x" << std::hex << address << std::endl;

  unserialize = Serializer::deserialize(address);

  std::cout << "this is the deserialize data\n"
            << unserialize->from << "\n"
            << unserialize->to << "\n"
            << unserialize->message << std::endl;

  return 0;
}