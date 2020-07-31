#include "ListInstancesResult.h"
#include "Host.h"

namespace Nacos
{

	std::wstring ListInstancesResult::getDom() const
	{
		return Dom;
	}

	void ListInstancesResult::setDom(const std::wstring &value)
	{
		Dom = value;
	}

	int ListInstancesResult::getCacheMillis() const
	{
		return CacheMillis;
	}

	void ListInstancesResult::setCacheMillis(int value)
	{
		CacheMillis = value;
	}

	std::wstring ListInstancesResult::getUseSpecifiedURL() const
	{
		return UseSpecifiedURL;
	}

	void ListInstancesResult::setUseSpecifiedURL(const std::wstring &value)
	{
		UseSpecifiedURL = value;
	}

	std::vector<Host*> ListInstancesResult::getHosts() const
	{
		return Hosts;
	}

	void ListInstancesResult::setHosts(const std::vector<Host*> &value)
	{
		Hosts = value;
	}

	std::wstring ListInstancesResult::getChecksum() const
	{
		return Checksum;
	}

	void ListInstancesResult::setChecksum(const std::wstring &value)
	{
		Checksum = value;
	}

	long long ListInstancesResult::getLastRefTime() const
	{
		return LastRefTime;
	}

	void ListInstancesResult::setLastRefTime(long long value)
	{
		LastRefTime = value;
	}

	std::wstring ListInstancesResult::getEnv() const
	{
		return Env;
	}

	void ListInstancesResult::setEnv(const std::wstring &value)
	{
		Env = value;
	}

	std::wstring ListInstancesResult::getClusters() const
	{
		return Clusters;
	}

	void ListInstancesResult::setClusters(const std::wstring &value)
	{
		Clusters = value;
	}
}
