#include <BeatInfo.h>

namespace Nacos
{

	int BeatInfo::getPort() const
	{
		return port;
	}

	void BeatInfo::setPort(int value)
	{
		port = value;
	}

	std::wstring BeatInfo::getIp() const
	{
		return ip;
	}

	void BeatInfo::setIp(const std::wstring &value)
	{
		ip = value;
	}

	double BeatInfo::getWeight() const
	{
		return weight;
	}

	void BeatInfo::setWeight(double value)
	{
		weight = value;
	}

	std::wstring BeatInfo::getServiceName() const
	{
		return serviceName;
	}

	void BeatInfo::setServiceName(const std::wstring &value)
	{
		serviceName = value;
	}

	std::wstring BeatInfo::getCluster() const
	{
		return cluster;
	}

	void BeatInfo::setCluster(const std::wstring &value)
	{
		cluster = value;
	}

	std::unordered_map<std::wstring, std::wstring> BeatInfo::getMetadata() const
	{
		return metadata;
	}

	void BeatInfo::setMetadata(const std::unordered_map<std::wstring, std::wstring> &value)
	{
		metadata = value;
	}

	bool BeatInfo::getScheduled() const
	{
		return scheduled;
	}

	void BeatInfo::setScheduled(bool value)
	{
		scheduled = value;
	}
}
