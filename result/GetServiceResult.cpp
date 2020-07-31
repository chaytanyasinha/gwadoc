#include "GetServiceResult.h"
#include "Selector.h"
#include "Cluster.h"

namespace Nacos
{

	std::unordered_map<std::wstring, std::wstring> GetServiceResult::getMetadata() const
	{
		return Metadata;
	}

	void GetServiceResult::setMetadata(const std::unordered_map<std::wstring, std::wstring> &value)
	{
		Metadata = value;
	}

	std::wstring GetServiceResult::getGroupName() const
	{
		return GroupName;
	}

	void GetServiceResult::setGroupName(const std::wstring &value)
	{
		GroupName = value;
	}

	std::wstring GetServiceResult::getNamespaceId() const
	{
		return NamespaceId;
	}

	void GetServiceResult::setNamespaceId(const std::wstring &value)
	{
		NamespaceId = value;
	}

	std::wstring GetServiceResult::getName() const
	{
		return Name;
	}

	void GetServiceResult::setName(const std::wstring &value)
	{
		Name = value;
	}

	Nacos::Selector *GetServiceResult::getSelector() const
	{
		return Selector;
	}

	void GetServiceResult::setSelector(Nacos::Selector *value)
	{
		Selector = value;
	}

	double GetServiceResult::getProtectThreshold() const
	{
		return ProtectThreshold;
	}

	void GetServiceResult::setProtectThreshold(double value)
	{
		ProtectThreshold = value;
	}

	std::vector<Cluster*> GetServiceResult::getClusters() const
	{
		return Clusters;
	}

	void GetServiceResult::setClusters(const std::vector<Cluster*> &value)
	{
		Clusters = value;
	}
}
