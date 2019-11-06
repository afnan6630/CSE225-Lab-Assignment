#include <iostream>
#include"UnsortedType.h"
#include"StudentInfo.h"
void checkItem(bool b);
void checkFull(bool b);

using namespace std;
/*template<class T>
void printList(UnsortedType<T> &temp_ut)
{
    T value;
    int len = temp_ut.LengthIs();

    for(int i=0; i<len; i++){
        temp_ut.GetNextItem(value);
        cout << value << endl;
    }
    cout << endl;

    temp_ut.ResetList();
}*/
int main()
{
    UnsortedType <int> in;

    UnsortedType<StudentInfo> student;
    StudentInfo s1,s2,s3,s4,s5;
    s1=StudentInfo(15234,"Abdullah",2.6);
    s2=StudentInfo(13732,"Muhammad",3.9);
    s3=StudentInfo(13569,"Ali",1.2);
    s4=StudentInfo(15467,"saad",3.1);
    s5=StudentInfo(16285,"mahdi",3.1);
    student.InsertItem(s1);
    student.InsertItem(s2);
    student.InsertItem(s3);
    student.InsertItem(s4);
    student.InsertItem(s5);
    student.DeleteItem(15467);
    bool c;
    student.RetrieveItem(13567,c);
    checkItem(c);
    student.print();

}
void checkItem(bool b){
    if(b==1)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}
void checkFull(bool b){
    if(b==1)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}
