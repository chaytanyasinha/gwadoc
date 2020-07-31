#pragma once

#include <string>
#include <any>

namespace Nacos
{
	class Host
	{
	private:
		bool Valid = false;
		bool Marked = false;
		std::wstring InstanceId;
		int Port = 0;
		std::wstring Ip;
		double Weight = 0;
		std::any Metadata;

	public:
		bool getValid() const;
		void setValid(bool value);
		bool getMarked() const;
		void setMarked(bool value);
		std::wstring getInstanceId() const;
		void setInstanceId(const std::wstring &value);
		int getPort() const;
		void setPort(int value);
		std::wstring getIp() const;
		void setIp(const std::wstring &value);
		double getWeight() const;
		void setWeight(double value);
		std::any getMetadata() const;
		void setMetadata(const std::any &value);
	};
}
