#include "ListClusterServersResult.h"
#include "ClusterServer.h"

namespace Nacos
{

	std::vector<ClusterServer*> ListClusterServersResult::getServers() const
	{
		return Servers;
	}

	void ListClusterServersResult::setServers(const std::vector<ClusterServer*> &value)
	{
		Servers = value;
	}
}
