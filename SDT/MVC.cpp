#include <iostream>
#include <string>

#include "Controller.h"
#include "Model.h"
#include "View.h"

inline void retriveStudentFromDatabase(model::Student& student,
										 std::string name,
										 std::string rollno)
{
	student.setName(name);
	student.setRollNo(rollno);
}

int main()
{
	model::Student model;
	retriveStudentFromDatabase(model, "Mark Abramov", "15UCS157");

	view::Student view;
	view.printStudentDetails(model.getName(), model.getRollNo());

	return 0;
}