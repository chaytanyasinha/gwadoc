#pragma once

#include <string>
#include <vector>

namespace Nacos
{

	class ListServicesResult
	{
	private:
		int Count = 0;
		std::vector<std::wstring> Doms;

	public:
		int getCount() const;
		void setCount(int value);
		std::vector<std::wstring> getDoms() const;
		void setDoms(const std::vector<std::wstring> &value);
	};
}
