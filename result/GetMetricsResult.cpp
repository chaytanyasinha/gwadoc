#include "GetMetricsResult.h"

namespace Nacos
{

	int GetMetricsResult::getServiceCount() const
	{
		return ServiceCount;
	}

	void GetMetricsResult::setServiceCount(int value)
	{
		ServiceCount = value;
	}

	double GetMetricsResult::getLoad() const
	{
		return Load;
	}

	void GetMetricsResult::setLoad(double value)
	{
		Load = value;
	}

	double GetMetricsResult::getMem() const
	{
		return Mem;
	}

	void GetMetricsResult::setMem(double value)
	{
		Mem = value;
	}

	int GetMetricsResult::getResponsibleServiceCount() const
	{
		return ResponsibleServiceCount;
	}

	void GetMetricsResult::setResponsibleServiceCount(int value)
	{
		ResponsibleServiceCount = value;
	}

	int GetMetricsResult::getInstanceCount() const
	{
		return InstanceCount;
	}

	void GetMetricsResult::setInstanceCount(int value)
	{
		InstanceCount = value;
	}

	double GetMetricsResult::getCpu() const
	{
		return Cpu;
	}

	void GetMetricsResult::setCpu(double value)
	{
		Cpu = value;
	}

	std::wstring GetMetricsResult::getStatus() const
	{
		return Status;
	}

	void GetMetricsResult::setStatus(const std::wstring &value)
	{
		Status = value;
	}

	int GetMetricsResult::getResponsibleInstanceCount() const
	{
		return ResponsibleInstanceCount;
	}

	void GetMetricsResult::setResponsibleInstanceCount(int value)
	{
		ResponsibleInstanceCount = value;
	}
}
