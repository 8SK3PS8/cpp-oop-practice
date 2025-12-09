#ifndef STUDENT
#define STUDENT

#include <string>
#include <vector>
using namespace std;

class Course;

class Student
{
    public:
        Student(string name, int id);
        ~Student();

        string getName();
        int getId();
        double getGpa();
        void setGpa(double gpa);
        vector<Course*> getCourses();
        void addCourse(Course* course);
        void removeCourse(Course* course);

    private:
        string name;
        int id;
        double gpa;
        vector<Course*> courses;
};

#endif