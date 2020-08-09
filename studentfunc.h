#ifndef STUDENTFUNC_H
#define STUDENTFUNC_H
#include <QString>

using namespace std;

//class containing data for a student
struct New_Student
{
    New_Student()
        :firstName("EMPTY"), lastName("EMPTY"), course("EMPTY")
        {}
    QString firstName;
    QString lastName;
    QString course;
};

#endif // STUDENTFUNC_H
