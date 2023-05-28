
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
	return *this;//just to shut off compiler warning
}
/*reinterpret_cast turns one type directly into another,
such as casting the value from one pointer to another,
or storing a pointer in an int(or uintptr_t in this case),
reinterpret_cast guarantees if you cast the result back to the original type
you get the exact same value
*/
uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t uintptrRes = reinterpret_cast<uintptr_t>(ptr);
	return (uintptrRes);
}
/*a common use case of reinterpret_cast
	reinterpret_cast is turning a raw data stream into actual data,
	here is a small showcase of casting back from a raw stream
	to the original data type.
*/
Data* Serializer::deserialize(uintptr_t raw)
{
	Data *origData = reinterpret_cast<Data *>(raw);
	return (origData);
}