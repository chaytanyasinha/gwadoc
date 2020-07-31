#pragma once

#include <vector>

//C# TO C++ CONVERTER NOTE: Forward class declarations:
namespace Nacos { class ClusterServer; }

namespace Nacos
{

	class ListClusterServersResult
	{
	private:
		std::vector<ClusterServer*> Servers;

	public:
		std::vector<ClusterServer*> getServers() const;
		void setServers(const std::vector<ClusterServer*> &value);
	};
}
