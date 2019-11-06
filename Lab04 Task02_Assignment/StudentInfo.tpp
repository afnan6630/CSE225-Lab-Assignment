#include"StudentInfo.h"
#include<iostream>

StudentInfo::StudentInfo()
{

}
StudentInfo::StudentInfo(int id)
{
    this->id = id;
}
StudentInfo::StudentInfo(int i, string n, double c)
{
    id=i;
    name=n;
    cgpa=c;
}
void StudentInfo::printStudent(int i, string n, double c)
{
    cout<<i<<" "<<n<<" "<<c;
}
