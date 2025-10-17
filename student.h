#include<iostream> 

using namespace std;

class Student {
private:
    string first_name;
    string last_name;
    string student_id; 


    bool check_id_format(const string& id);
public:
    Student(string fn,string ln, string id);
    void display_info();



};