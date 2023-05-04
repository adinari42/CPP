
#include	"Serializer.hpp"

Serializer::Serializer()
{
	
}

Serializer::Serializer(const Serializer &a)
{
	
}

Serializer::~Serializer()
{
	
}

Serializer &Serializer::operator=(const Serializer& a)
{
	
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t uintptrRes = reinterpret_cast<uintptr_t>(ptr);
	return (uintptrRes);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *origData = reinterpret_cast<Data *>(raw);
	return (origData);
}