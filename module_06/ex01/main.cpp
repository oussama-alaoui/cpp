#include "serialize.hpp"


int main() {
    try {
    Data data = {10, 20.5};
    uintptr_t serialized = Serializer::serialize(&data);
    Data* deserialized = Serializer::deserialize(serialized);

    if (deserialized == &data) {
    {
        std::cout << "Serialization and deserialization successful." << std::endl;
        std::cout << "Data: " << data.a << " " << data.b << std::endl;
    }
    } else {
        std::cout << "Serialization and deserialization failed." << std::endl;
    }
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}