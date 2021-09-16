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
	controller::Student controller(model, view);

	controller.updateView();
	controller.setStudentName("Ada Wong");
	controller.setStudentRollNo("20UCS456");
	controller.updateView();

	return 0;
}