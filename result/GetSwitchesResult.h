#pragma once

//====================================================================================================
//The Free Edition of C# to C++ Converter limits conversion output to 100 lines per file.

//To purchase the Premium Edition, visit our website:
//https://www.tangiblesoftwaresolutions.com/order/order-csharp-to-cplus.html
//====================================================================================================

#include <string>
#include <unordered_map>
#include <vector>
#include <any>

//C# TO C++ CONVERTER NOTE: Forward class declarations:
namespace Nacos { class HttpHealthParams; }
namespace Nacos { class TcpHealthParams; }
namespace Nacos { class MySqlHealthParams; }

namespace Nacos
{

	class GetSwitchesResult
	{
	private:
		std::wstring Name;
		std::wstring Masters;
		std::any AdWeightMap;
		int DefaultPushCacheMillis = 0;
		int ClientBeatInterval = 0;
		int DefaultCacheMillis = 0;
		double DistroThreshold = 0;
		bool HealthCheckEnabled = false;
		bool DistroEnabled = false;
		bool EnableStandalone = false;
		bool PushEnabled = false;
		int CheckTimes = 0;
		Nacos::HttpHealthParams *HttpHealthParams;
		Nacos::TcpHealthParams *TcpHealthParams;
		MySqlHealthParams *MysqlHealthParams;
		std::vector<std::wstring> IncrementalList;
		int ServerStatusSynchronizationPeriodMillis = 0;
		int ServiceStatusSynchronizationPeriodMillis = 0;
		bool DisableAddIP = false;
		bool SendBeatOnly = false;
		std::unordered_map<std::wstring, std::wstring> LimitedUrlMap;
		int DistroServerExpiredMillis = 0;
		std::wstring PushGoVersion;
		std::wstring PushJavaVersion;
		std::wstring PushPythonVersion;
		std::wstring PushCVersion;
		bool EnableAuthentication = false;
		std::wstring OverriddenServerStatus;
		bool DefaultInstanceEphemeral = false;
		std::vector<std::wstring> HealthCheckWhiteList;
		std::wstring Checksum;

	public:
		std::wstring getName() const;
		void setName(const std::wstring &value);
		std::wstring getMasters() const;
		void setMasters(const std::wstring &value);
		std::any getAdWeightMap() const;
		void setAdWeightMap(const std::any &value);
		int getDefaultPushCacheMillis() const;
		void setDefaultPushCacheMillis(int value);
		int getClientBeatInterval() const;
		void setClientBeatInterval(int value);
		int getDefaultCacheMillis() const;
		void setDefaultCacheMillis(int value);
		double getDistroThreshold() const;
		void setDistroThreshold(double value);
		bool getHealthCheckEnabled() const;
		void setHealthCheckEnabled(bool value);
		bool getDistroEnabled() const;
		void setDistroEnabled(bool value);

		bool getEnableStandalone() const;
		void setEnableStandalone(bool value);

		bool getPushEnabled() const;
		void setPushEnabled(bool value);

		int getCheckTimes() const;
		void setCheckTimes(int value);

		Nacos::HttpHealthParams *getHttpHealthParams() const;
		void setHttpHealthParams(Nacos::HttpHealthParams *value);

		Nacos::TcpHealthParams *getTcpHealthParams() const;
		void setTcpHealthParams(Nacos::TcpHealthParams *value);

		MySqlHealthParams *getMysqlHealthParams() const;
		void setMysqlHealthParams(MySqlHealthParams *value);

		std::vector<std::wstring> getIncrementalList() const;
		void setIncrementalList(const std::vector<std::wstring> &value);

		int getServerStatusSynchronizationPeriodMillis() const;
		void setServerStatusSynchronizationPeriodMillis(int value);
		int getServiceStatusSynchronizationPeriodMillis() const;
		void setServiceStatusSynchronizationPeriodMillis(int value);
		bool getDisableAddIP() const;
		void setDisableAddIP(bool value);
		bool getSendBeatOnly() const;
		void setSendBeatOnly(bool value);
		std::unordered_map<std::wstring, std::wstring> getLimitedUrlMap() const;

//====================================================================================================
//End of the allowed output for the Free Edition of C# to C++ Converter.

//To purchase the Premium Edition, visit our website:
//https://www.tangiblesoftwaresolutions.com/order/order-csharp-to-cplus.html
//====================================================================================================
