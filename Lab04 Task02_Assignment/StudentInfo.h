#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;
class StudentInfo
{
    private:
        int id;
        string name;
        double cgpa;
    public:
        StudentInfo();
        StudentInfo(int);
        StudentInfo(int,string,double);
        void printStudent(int,string,double);


};
#include"StudentInfo.tpp"

#endif // STUDENTINFO_H_INCLUDED
