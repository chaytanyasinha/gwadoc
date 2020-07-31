#include <ClusterServer.h>

namespace Nacos
{

	std::wstring ClusterServer::getIp() const
	{
		return Ip;
	}

	void ClusterServer::setIp(const std::wstring &value)
	{
		Ip = value;
	}

	int ClusterServer::getServePort() const
	{
		return ServePort;
	}

	void ClusterServer::setServePort(int value)
	{
		ServePort = value;
	}

	std::wstring ClusterServer::getSite() const
	{
		return Site;
	}

	void ClusterServer::setSite(const std::wstring &value)
	{
		Site = value;
	}

	double ClusterServer::getWeight() const
	{
		return Weight;
	}

	void ClusterServer::setWeight(double value)
	{
		Weight = value;
	}

	double ClusterServer::getAdWeight() const
	{
		return AdWeight;
	}

	void ClusterServer::setAdWeight(double value)
	{
		AdWeight = value;
	}

	bool ClusterServer::getAlive() const
	{
		return Alive;
	}

	void ClusterServer::setAlive(bool value)
	{
		Alive = value;
	}

	int ClusterServer::getLastRefTime() const
	{
		return LastRefTime;
	}

	void ClusterServer::setLastRefTime(int value)
	{
		LastRefTime = value;
	}

	std::wstring ClusterServer::getLastRefTimeStr() const
	{
		return LastRefTimeStr;
	}

	void ClusterServer::setLastRefTimeStr(const std::wstring &value)
	{
		LastRefTimeStr = value;
	}

	std::wstring ClusterServer::getKey() const
	{
		return Key;
	}

	void ClusterServer::setKey(const std::wstring &value)
	{
		Key = value;
	}
}
