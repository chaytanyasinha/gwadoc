#pragma once

#include <string>
#include <unordered_map>

namespace Nacos
{

	class BeatInfo
	{
	private:
		int port = 0;
		std::wstring ip;
		double weight = 0;
		std::wstring serviceName;
		std::wstring cluster;
		std::unordered_map<std::wstring, std::wstring> metadata = std::unordered_map<std::wstring, std::wstring>();
		bool scheduled = false;

	public:
		int getPort() const;
		void setPort(int value);
		std::wstring getIp() const;
		void setIp(const std::wstring &value);
		double getWeight() const;
		void setWeight(double value);
		std::wstring getServiceName() const;
		void setServiceName(const std::wstring &value);
		std::wstring getCluster() const;
		void setCluster(const std::wstring &value);
		std::unordered_map<std::wstring, std::wstring> getMetadata() const;
		void setMetadata(const std::unordered_map<std::wstring, std::wstring> &value);
		bool getScheduled() const;
		void setScheduled(bool value);
	};
}
