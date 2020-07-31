#pragma once

#include <string>
#include <unordered_map>
#include <vector>

//C# TO C++ CONVERTER NOTE: Forward class declarations:
namespace Nacos { class Selector; }
namespace Nacos { class Cluster; }

namespace Nacos
{

	class GetServiceResult
	{
	private:
		std::unordered_map<std::wstring, std::wstring> Metadata;
		std::wstring GroupName;
		std::wstring NamespaceId;
		std::wstring Name;
		Nacos::Selector *Selector;
		double ProtectThreshold = 0;
		std::vector<Cluster*> Clusters;

	public:
		std::unordered_map<std::wstring, std::wstring> getMetadata() const;
		void setMetadata(const std::unordered_map<std::wstring, std::wstring> &value);
		std::wstring getGroupName() const;
		void setGroupName(const std::wstring &value);
		std::wstring getNamespaceId() const;
		void setNamespaceId(const std::wstring &value);
		std::wstring getName() const;
		void setName(const std::wstring &value);
		Nacos::Selector *getSelector() const;
		void setSelector(Nacos::Selector *value);

		/// <summary>
		/// protect threshold
		/// 保护阈值
		/// </summary>
		double getProtectThreshold() const;
		void setProtectThreshold(double value);
		std::vector<Cluster*> getClusters() const;
		void setClusters(const std::vector<Cluster*> &value);
	};
}
