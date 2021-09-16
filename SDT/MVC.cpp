#include <iostream>
#include <string>

#include "Controller.h"
#include "Model.h"
#include "View.h"

inline void retriveStudentFromDatabase(Model::Student& student,
									     std::string name,
									     std::string rollno)
{
	student.setName(name);
	student.setRollNo(rollno);
}

int main()
{

	return 0;
}