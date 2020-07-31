#include <BaseHealthParams.h>

namespace Nacos
{

	int BaseHealthParams::getMax() const
	{
		return Max;
	}

	void BaseHealthParams::setMax(int value)
	{
		Max = value;
	}

	int BaseHealthParams::getMin() const
	{
		return Min;
	}

	void BaseHealthParams::setMin(int value)
	{
		Min = value;
	}

	double BaseHealthParams::getFactor() const
	{
		return Factor;
	}

	void BaseHealthParams::setFactor(double value)
	{
		Factor = value;
	}
}
