#include "ClusterLeader.h"

namespace Nacos
{

	int ClusterLeader::getHeartbeatDueMs() const
	{
		return HeartbeatDueMs;
	}

	void ClusterLeader::setHeartbeatDueMs(int value)
	{
		HeartbeatDueMs = value;
	}

	std::wstring ClusterLeader::getIp() const
	{
		return Ip;
	}

	void ClusterLeader::setIp(const std::wstring &value)
	{
		Ip = value;
	}

	int ClusterLeader::getLeaderDueMs() const
	{
		return LeaderDueMs;
	}

	void ClusterLeader::setLeaderDueMs(int value)
	{
		LeaderDueMs = value;
	}

	std::wstring ClusterLeader::getState() const
	{
		return State;
	}

	void ClusterLeader::setState(const std::wstring &value)
	{
		State = value;
	}

	int ClusterLeader::getTerm() const
	{
		return Term;
	}

	void ClusterLeader::setTerm(int value)
	{
		Term = value;
	}

	std::wstring ClusterLeader::getVoteFor() const
	{
		return VoteFor;
	}

	void ClusterLeader::setVoteFor(const std::wstring &value)
	{
		VoteFor = value;
	}
}
