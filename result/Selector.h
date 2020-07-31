#pragma once

#include <string>

namespace Nacos
{
	class Selector
	{
	private:
		std::wstring Type;

		/// <summary>
		/// The types of selector accepted by Nacos
		/// 
		/// 1. unknown  not match any type
		/// 2. none     not filter out any entity
		/// 3. label    select by label
		/// 
		/// </summary>
	public:
		std::wstring getType() const;
		void setType(const std::wstring &value);
	};
}
