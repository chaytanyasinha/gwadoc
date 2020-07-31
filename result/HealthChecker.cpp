#include "HealthChecker.h"

namespace Nacos
{

	std::wstring HealthChecker::getType() const
	{
		return Type;
	}

	void HealthChecker::setType(const std::wstring &value)
	{
		Type = value;
	}
}
