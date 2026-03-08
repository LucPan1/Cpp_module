#include "Serializer.hpp"

int main()
{
    Data d;
    d._id = 42;
    d._name = "Test1";

    uintptr_t raw1 = Serializer::serialize(&d);
    Data *deserialize = Serializer::deserialize(raw1);

    std::cout << "Original: " << &d
              << ", id: " << d._id
              << ", name: " << d._name
              << std::endl;

    std::cout << "Deserialized: " << &deserialize
              << ", id: " << deserialize->_id
              << ", name: " << deserialize->_name
              << std::endl;

    std::cout << std::endl;

    Data data;
    data._id = 2;
    data._name = "Test";

    Data *ptr = &data;
    uintptr_t raw2 = Serializer::serialize(&data);
    Data *deserialized = Serializer::deserialize(raw2);

    if (deserialized == ptr)
        std::cout << "Comparaison equal to the original pointer" << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "Original: " << &data
            << ", id: " << data._id
            << ", name: " << data._name
            << std::endl;

    std::cout << "Deserialized: " << &deserialized
            << ", id: " << deserialized->_id
            << ", name: " << deserialized->_name
            << std::endl;
}