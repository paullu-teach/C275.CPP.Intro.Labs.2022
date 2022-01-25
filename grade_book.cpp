#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Exercise: Student Record
struct StudentRecord {
    int ID;
    string name;
    float GPA;

};
// Excercise: Grade Book Part 1
class GradeBook {
    public :
        GradeBook () { }

        void addStudent (int ID , string name , float GPA ) {
            if( ID < 10000000 || ID > 99999999) {
                cout << " Could not add new student : Student ID incorrect length" << endl ;
            }
            if( GPA < 0) GPA = 0;
            if( GPA > 4) GPA = 4;
            StudentRecord newStudent = {ID , name , GPA };
            students.push_back( newStudent );
        }

        void getGPA (int ID ) {
            for( auto student : students ) {
                if( student . ID == ID ) {
                    cout << " Student " << ID << " has a GPA of " << student . GPA << endl ;
                    return ;
                }
            }
            cout << " Student " << ID << " not found ." << endl ;
        }
        void setGPA (int ID , float GPA ) {
            for( auto & student : students ){
                if( student . ID == ID ) {
                    student.GPA = GPA ;
                    return ;
                }
            }
            cout << " Student " << ID << " not found ." << endl ;
        }

    private :
        vector < StudentRecord > students ;
};

int main()
{
    StudentRecord alice = {12345678, "Alice", 4.0};

    StudentRecord bob;
    bob.ID = 23456789;
    bob.name = "Bob";
    bob.GPA = 3.2;

    cout << alice.ID << " has a GPA of " << alice.GPA << endl;
    cout << bob.ID << " has a GPA of " << bob.GPA << endl;

    return 0;
}


