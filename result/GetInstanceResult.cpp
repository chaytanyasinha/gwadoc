#include "GetInstanceResult.h"

namespace Nacos
{

	std::unordered_map<std::wstring, std::wstring> GetInstanceResult::getMetadata() const
	{
		return Metadata;
	}

	void GetInstanceResult::setMetadata(const std::unordered_map<std::wstring, std::wstring> &value)
	{
		Metadata = value;
	}

	std::wstring GetInstanceResult::getInstanceId() const
	{
		return InstanceId;
	}

	void GetInstanceResult::setInstanceId(const std::wstring &value)
	{
		InstanceId = value;
	}

	int GetInstanceResult::getPort() const
	{
		return Port;
	}

	void GetInstanceResult::setPort(int value)
	{
		Port = value;
	}

	std::wstring GetInstanceResult::getService() const
	{
		return Service;
	}

	void GetInstanceResult::setService(const std::wstring &value)
	{
		Service = value;
	}

	bool GetInstanceResult::getHealthy() const
	{
		return Healthy;
	}

	void GetInstanceResult::setHealthy(bool value)
	{
		Healthy = value;
	}

	std::wstring GetInstanceResult::getIp() const
	{
		return Ip;
	}

	void GetInstanceResult::setIp(const std::wstring &value)
	{
		Ip = value;
	}

	std::wstring GetInstanceResult::getClusterName() const
	{
		return ClusterName;
	}

	void GetInstanceResult::setClusterName(const std::wstring &value)
	{
		ClusterName = value;
	}

	double GetInstanceResult::getWeight() const
	{
		return Weight;
	}

	void GetInstanceResult::setWeight(double value)
	{
		Weight = value;
	}
}
