#pragma once

#include <string>

namespace Nacos
{
	class GetMetricsResult
	{
	private:
		int ServiceCount = 0;
		double Load = 0;
		double Mem = 0;
		int ResponsibleServiceCount = 0;
		int InstanceCount = 0;
		double Cpu = 0;
		std::wstring Status;
		int ResponsibleInstanceCount = 0;

	public:
		int getServiceCount() const;
		void setServiceCount(int value);

		double getLoad() const;
		void setLoad(double value);

		double getMem() const;
		void setMem(double value);

		int getResponsibleServiceCount() const;
		void setResponsibleServiceCount(int value);

		int getInstanceCount() const;
		void setInstanceCount(int value);

		double getCpu() const;
		void setCpu(double value);

		std::wstring getStatus() const;
		void setStatus(const std::wstring &value);

		int getResponsibleInstanceCount() const;
		void setResponsibleInstanceCount(int value);
	};
}
