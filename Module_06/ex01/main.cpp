#include "Serializer.hpp"

int main(void)
{
	Data* data1 = new Data;
	data1->dataName = "data1";
	data1->dataId = 1;
	std::cout << "data1 name = " << data1->dataName << std::endl;
	std::cout << "data1 ID = " << data1->dataId << std::endl;
	uintptr_t serializeRes = Serializer::serialize(data1);
	std::cout << "data1 = " << data1 << std::endl;
	std::cout << "serializeRes = " << serializeRes << std::endl;
	Data *deserializeRes = Serializer::deserialize(serializeRes);
	std::cout << "data2 = " << deserializeRes << std::endl;
	std::cout << "deserializeRes name = " << deserializeRes->dataName << std::endl;
	std::cout << "deserializeRes ID = " << deserializeRes->dataId << std::endl;
	return 0;
}