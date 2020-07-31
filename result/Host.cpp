#include "Host.h"

namespace Nacos
{

	bool Host::getValid() const
	{
		return Valid;
	}

	void Host::setValid(bool value)
	{
		Valid = value;
	}

	bool Host::getMarked() const
	{
		return Marked;
	}

	void Host::setMarked(bool value)
	{
		Marked = value;
	}

	std::wstring Host::getInstanceId() const
	{
		return InstanceId;
	}

	void Host::setInstanceId(const std::wstring &value)
	{
		InstanceId = value;
	}

	int Host::getPort() const
	{
		return Port;
	}

	void Host::setPort(int value)
	{
		Port = value;
	}

	std::wstring Host::getIp() const
	{
		return Ip;
	}

	void Host::setIp(const std::wstring &value)
	{
		Ip = value;
	}

	double Host::getWeight() const
	{
		return Weight;
	}

	void Host::setWeight(double value)
	{
		Weight = value;
	}

	std::any Host::getMetadata() const
	{
		return Metadata;
	}

	void Host::setMetadata(const std::any &value)
	{
		Metadata = value;
	}
}
