#include "Selector.h"

namespace Nacos
{

	std::wstring Selector::getType() const
	{
		return Type;
	}

	void Selector::setType(const std::wstring &value)
	{
		Type = value;
	}
}
