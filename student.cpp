#include "student.h"

using namespace std;

bool Student::check_id_format(const string& id) {
    for (size_t i = 0; i < 8; i++)
    {
        if (id[i]<'0' || id[i]>'9')
        {   
            return false;
        }        
    }
    return id.length() == 8;
}

Student::Student(string fn,string ln, string id) {
    first_name = fn;
    last_name = ln;
    while (check_id_format(id)) {
        cout << "Invalid ID format. Please enter an 8-digit numeric ID: ";
        cin >> id;
    }
    student_id = id;
}

void Student::display_info() {
    cout << first_name << " " << last_name << endl;
    cout << "Student ID: " << student_id << endl;
}