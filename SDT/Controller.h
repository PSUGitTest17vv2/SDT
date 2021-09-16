#pragma once
#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <string>

namespace Controller
{
	class Student
	{
	private:
		Model::Student model;
		View::Student view;

	public:
		Student(Model::Student model, View::StudentView view)
		{
			model = model;
			view = view;
		}

		void setStudentName(std::string name)
		{
			model.setName(name);
		}

		std::string getStudentName()
		{
			return model.getName();
		}

		void setStudentRollNo(std::string rollNo)
		{
			model.setRollNo(rollNo);
		}

		std::string getStudentRollNo()
		{
			return model.getRollNo();
		}

		void updateView()
		{
			view.printStudentDetails(model.getName(), model.getRollNo());
		}
	};
}

#endif // !CONTROLLER_H_
