#pragma once

#include <string>
#include <unordered_map>

namespace Nacos
{

	class GetInstanceResult
	{
	private:
		std::unordered_map<std::wstring, std::wstring> Metadata;
		std::wstring InstanceId;
		int Port = 0;
		std::wstring Service;
		bool Healthy = false;
		std::wstring Ip;
		std::wstring ClusterName;
		double Weight = 0;

		/// <summary>
		/// user extended attributes
		/// </summary>
	public:
		std::unordered_map<std::wstring, std::wstring> getMetadata() const;
		void setMetadata(const std::unordered_map<std::wstring, std::wstring> &value);

		/// <summary>
		/// unique id of this instance
		/// </summary>
		std::wstring getInstanceId() const;
		void setInstanceId(const std::wstring &value);

		/// <summary>
		/// instance port
		/// </summary>
		int getPort() const;
		void setPort(int value);

		/// <summary>
		/// 
		/// </summary>
		std::wstring getService() const;
		void setService(const std::wstring &value);

		/// <summary>
		/// instance health status
		/// </summary>
		bool getHealthy() const;
		void setHealthy(bool value);

		/// <summary>
		/// instance ip
		/// </summary>
		std::wstring getIp() const;
		void setIp(const std::wstring &value);

		/// <summary>
		/// cluster information of instance
		/// </summary>
		std::wstring getClusterName() const;
		void setClusterName(const std::wstring &value);

		/// <summary>
		/// instance weight
		/// </summary>
		double getWeight() const;
		void setWeight(double value);
	};
}
