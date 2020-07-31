#include <cluster.h>
#include <healthchecker.h>

namespace Nacos
{

	Nacos::HealthChecker *Cluster::getHealthChecker() const
	{
		return HealthChecker;
	}

	void Cluster::setHealthChecker(Nacos::HealthChecker *value)
	{
		HealthChecker = value;
	}

	std::unordered_map<std::wstring, std::wstring> Cluster::getMetadata() const
	{
		return Metadata;
	}

	void Cluster::setMetadata(const std::unordered_map<std::wstring, std::wstring> &value)
	{
		Metadata = value;
	}

	std::wstring Cluster::getName() const
	{
		return Name;
	}

	void Cluster::setName(const std::wstring &value)
	{
		Name = value;
	}
}
