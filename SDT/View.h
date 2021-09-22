#pragma once
#ifndef VIEW_H_
#define VIEW_H_

#include <string>

namespace view
{
	class Student
	{
	public:
		void printStudentDetails(const std::string& studentName,
								 const std::string& studentRollNo,
								 unsigned age)
		{
			std::cout << "--- Student ---"
					  << "\nName:    " << studentName
					  << "\nAge:     " << age
					  << "\nRoll No: " << studentRollNo
					  << std::endl << std::endl;
		}
	};
}

#endif // !VIEW_H_
