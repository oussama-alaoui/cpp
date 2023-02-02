#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <cstdint>
#include <iostream>

struct Data {
  int a;
  double b;
};

class Serializer {
 public:
  static uintptr_t serialize(Data* ptr);
  static Data* deserialize(uintptr_t raw);
};

#endif