#include "GetCurrentClusterLeaderResult.h"

namespace Nacos
{

	int GetCurrentClusterLeaderResult::getHeartbeatDueMs() const
	{
		return HeartbeatDueMs;
	}

	void GetCurrentClusterLeaderResult::setHeartbeatDueMs(int value)
	{
		HeartbeatDueMs = value;
	}

	std::wstring GetCurrentClusterLeaderResult::getIp() const
	{
		return Ip;
	}

	void GetCurrentClusterLeaderResult::setIp(const std::wstring &value)
	{
		Ip = value;
	}

	int GetCurrentClusterLeaderResult::getLeaderDueMs() const
	{
		return LeaderDueMs;
	}

	void GetCurrentClusterLeaderResult::setLeaderDueMs(int value)
	{
		LeaderDueMs = value;
	}

	std::wstring GetCurrentClusterLeaderResult::getState() const
	{
		return State;
	}

	void GetCurrentClusterLeaderResult::setState(const std::wstring &value)
	{
		State = value;
	}

	int GetCurrentClusterLeaderResult::getTerm() const
	{
		return Term;
	}

	void GetCurrentClusterLeaderResult::setTerm(int value)
	{
		Term = value;
	}

	std::wstring GetCurrentClusterLeaderResult::getVoteFor() const
	{
		return VoteFor;
	}

	void GetCurrentClusterLeaderResult::setVoteFor(const std::wstring &value)
	{
		VoteFor = value;
	}
}
