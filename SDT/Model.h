#pragma once
#ifndef MODEL_H_
#define MODEL_H_

#include <string>

namespace model
{
	class Student
	{
	private:
		std::string name;
		std::string rollNo;
		unsigned age;
	public:
		// Name
		// ---------------------------------------
		std::string getName()
		{
			return name;
		}
		void setName(std::string name)
		{
			this->name = name;
		}

		// Age
		// ---------------------------------------
		unsigned getAge()
		{
			return age;
		}
		void setAge(unsigned age)
		{
			this->age = age;
		}

		// RollNo
		// ---------------------------------------
		std::string getRollNo()
		{
			return rollNo;
		}
		void setRollNo(std::string rollNo)
		{
			this->rollNo = rollNo;
		}
	};
}

#endif // !MODEL_H_
