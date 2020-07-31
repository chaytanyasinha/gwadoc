#pragma once

#include <string>
#include <vector>

//C# TO C++ CONVERTER NOTE: Forward class declarations:
namespace Nacos { class Host; }

namespace Nacos
{

	class ListInstancesResult
	{
	private:
		std::wstring Dom;
		int CacheMillis = 0;
		std::wstring UseSpecifiedURL;
		std::vector<Host*> Hosts;
		std::wstring Checksum;
		long long LastRefTime = 0;
		std::wstring Env;
		std::wstring Clusters;

	public:
		std::wstring getDom() const;
		void setDom(const std::wstring &value);
		int getCacheMillis() const;
		void setCacheMillis(int value);
		std::wstring getUseSpecifiedURL() const;
		void setUseSpecifiedURL(const std::wstring &value);
		std::vector<Host*> getHosts() const;
		void setHosts(const std::vector<Host*> &value);
		std::wstring getChecksum() const;
		void setChecksum(const std::wstring &value);
		long long getLastRefTime() const;
		void setLastRefTime(long long value);
		std::wstring getEnv() const;
		void setEnv(const std::wstring &value);
		std::wstring getClusters() const;
		void setClusters(const std::wstring &value);
	};
}
