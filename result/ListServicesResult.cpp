#include <ListServicesResult.h>

namespace Nacos
{

	int ListServicesResult::getCount() const
	{
		return Count;
	}

	void ListServicesResult::setCount(int value)
	{
		Count = value;
	}

	std::vector<std::wstring> ListServicesResult::getDoms() const
	{
		return Doms;
	}

	void ListServicesResult::setDoms(const std::vector<std::wstring> &value)
	{
		Doms = value;
	}
}
