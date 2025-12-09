#include "school.h"
#include <memory>

School::School(string name)
{
    this->name = name;
}

School::~School() {}

string School::getName()
{
    return name;
}

Student* School::addStudent(string name, int id)
{
    students.push_back(make_unique<Student>(name, id));
    return students.back().get();
}

Course* School::addCourse(string name, string code, string instructor)
{
    courses.push_back(make_unique<Course>(name, code, instructor));
    return courses.back().get();
}

void School::enrollStudent(Student* student, Course* course)
{
    student->addCourse(course);
    course->addStudent(student);
}

void School::removeStudent(int id)
{
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i]->getId() == id)
        {
            students.erase(students.begin() + i);
            return;
        }
    }
}

void School::removeCourse(string code)
{
    for (int i = 0; i < courses.size(); i++)
    {
        if (courses[i]->getCourseCode() == code)
        {
            courses.erase(courses.begin() + i);
            return;
        }
    }
}