#pragma once

#include <string>

namespace Nacos
{
	class ClusterServer
	{
	private:
		std::wstring Ip;
		int ServePort = 0;
		std::wstring Site;
		double Weight = 0;
		double AdWeight = 0;
		bool Alive = false;
		int LastRefTime = 0;
		std::wstring LastRefTimeStr;
		std::wstring Key;

	public:
		std::wstring getIp() const;
		void setIp(const std::wstring &value);
		int getServePort() const;
		void setServePort(int value);
		std::wstring getSite() const;
		void setSite(const std::wstring &value);
		double getWeight() const;
		void setWeight(double value);
		double getAdWeight() const;
		void setAdWeight(double value);
		bool getAlive() const;
		void setAlive(bool value);
		int getLastRefTime() const;
		void setLastRefTime(int value);
		std::wstring getLastRefTimeStr() const;
		void setLastRefTimeStr(const std::wstring &value);
		std::wstring getKey() const;
		void setKey(const std::wstring &value);
	};
}
