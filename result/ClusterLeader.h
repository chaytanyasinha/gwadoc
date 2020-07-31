#pragma once

#include <string>

namespace Nacos
{
	class ClusterLeader
	{
	private:
		int HeartbeatDueMs = 0;
		std::wstring Ip;
		int LeaderDueMs = 0;
		std::wstring State;
		int Term = 0;
		std::wstring VoteFor;

	public:
		int getHeartbeatDueMs() const;
		void setHeartbeatDueMs(int value);

		std::wstring getIp() const;
		void setIp(const std::wstring &value);

		int getLeaderDueMs() const;
		void setLeaderDueMs(int value);

		/// <summary>
		/// 1. LEADER     Leader of the cluster, only one leader stands in a cluster
		/// 2. FOLLOWER   Follower of the cluster, report to and copy from leader
		/// 3. CANDIDATE  Candidate leader to be elected 
		/// </summary>
		std::wstring getState() const;
		void setState(const std::wstring &value);

		int getTerm() const;
		void setTerm(int value);

		std::wstring getVoteFor() const;
		void setVoteFor(const std::wstring &value);
	};
}
