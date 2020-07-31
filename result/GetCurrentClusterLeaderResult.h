#pragma once

#include <string>

namespace Nacos
{
	class GetCurrentClusterLeaderResult
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
		std::wstring getState() const;
		void setState(const std::wstring &value);
		int getTerm() const;
		void setTerm(int value);
		std::wstring getVoteFor() const;
		void setVoteFor(const std::wstring &value);
	};
}
