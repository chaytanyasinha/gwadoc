#pragma once

#include <string>

namespace Nacos
{
	class HealthChecker
	{
	private:
		std::wstring Type;

	public:
		std::wstring getType() const;
		void setType(const std::wstring &value);
	};
}
