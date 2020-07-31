#pragma once

namespace Nacos
{
	class BaseHealthParams
	{
	private:
		int Max = 0;
		int Min = 0;
		double Factor = 0;

	public:
		int getMax() const;
		void setMax(int value);
		int getMin() const;
		void setMin(int value);
		double getFactor() const;
		void setFactor(double value);
	};
}
