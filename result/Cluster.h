#pragma once

#include <string>
#include <unordered_map>

//C# TO C++ CONVERTER NOTE: Forward class declarations:
namespace Nacos { class HealthChecker; }

namespace Nacos
{

	class Cluster
	{
	private:
		Nacos::HealthChecker *HealthChecker;
		std::unordered_map<std::wstring, std::wstring> Metadata;
		std::wstring Name;

		/// <summary>
		/// Health check config of this cluster
		/// </summary>
	public:
		Nacos::HealthChecker *getHealthChecker() const;
		void setHealthChecker(Nacos::HealthChecker *value);

		/// <summary>
		/// 
		/// </summary>
		std::unordered_map<std::wstring, std::wstring> getMetadata() const;
		void setMetadata(const std::unordered_map<std::wstring, std::wstring> &value);

		/// <summary>
		/// Name of cluster
		/// </summary>
		std::wstring getName() const;
		void setName(const std::wstring &value);
	};
}
