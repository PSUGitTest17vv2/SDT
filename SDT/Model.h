#pragma once
#ifndef MODEL_H_
#define MODEL_H_

#include <string>

namespace Model
{
	class Student
	{
	private:
		std::string rollNo;
		std::string name;

	public:
		std::string getRollNo()
		{
			return rollNo;
		}

		void setRollNo(std::string rollNo)
		{
			rollNo = rollNo;
		}

		std::string getName()
		{
			return name;
		}

		void setName(std::string name)
		{
			name = name;
		}
	};
}

#endif // !MODEL_H_
