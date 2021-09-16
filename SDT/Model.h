#pragma once
#ifndef MODEL_H_
#define MODEL_H_

#include <string>

class Student
{
    private String rollNo;
    private String name;

    public String getRollNo()
    {
        return rollNo;
    }

    public void setRollNo(String rollNo)
    {
        this.rollNo = rollNo;
    }

    public String getName()
    {
        return name;
    }

    public void setName(String name)
    {
        this.name = name;
    }
}

#endif // !MODEL_H_
