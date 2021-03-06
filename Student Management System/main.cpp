#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class Student
{
    int rollno,grade;
    string fname,mname,lname,dob,address;
    public:
        void show_data(int search_key);
        // void get_data(int i);
        void search_student(int search_key);
        void add_student();
        void edit_student(int id_number);
};

void Student::show_data(int search_key)
{
    cout<<endl<<"Student Details : "<<endl<<"Roll no : "<<rollno<<"Grade : "<<grade;
    cout<<endl<<"Name : "<<fname<<" "<<mname<<" "<<lname;
    cout<<endl<<"DOB : "<<dob<<endl<<"Address : "<<address;
}

// void get_data(int i)
// {

// }

void Student::search_student(int search_key)
{
    show_data(search_key);
}

void Student::add_student()
{
    cout<<endl<<"Add Operation : "<<endl<<"Enter rollno. grade(space)";
    cin>>rollno>>grade;
    cout<<endl<<"Enter fname mname lname : ";
    cin>>fname>>mname>>lname;
    cout<<endl<<"Enter dob(DDMMYYYY) : ";
    cin>>dob;
    cout<<endl<<"ENter address";
    cin>>address;
}

void Student::edit_student(int id_number)
{
    cout<<endl<<"Add Operation : "<<endl<<"Enter rollno. grade(space)";
    cin>>rollno>>grade;
    cout<<endl<<"Enter fname mname lname : ";
    cin>>fname>>mname>>lname;
    cout<<endl<<"Enter dob(DDMMYYYY) : ";
    cin>>dob;
    cout<<endl<<"ENter address";
    cin>>address;
}

int main()
{
    int choice,count=1;
    cout<<"                 Student Management System                          "<<endl;
    while(1)
    {
        cout<<"**************************************************"<<endl;
        cout<<"Operations"<<endl<<"1. Add student data"
            <<endl<<"2. Edit Student Data"<<endl<<"3. Search Student"<<endl<<"4. Exit"<<endl<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                Student a[count];
                a[count].add_student();
                count++;
                break;
            case 2:
                cout<<endl<<"Enter student Roll no. : ";
                int temp_id;
                if(temp_id > count)
                {
                    printf("Roll doesn't exist.");
                    break;
                }
                else
                {
                    a[count].edit_student(temp_id);
                }
                break;
            case 3:
                cout<<endl<<"Enter student Roll no. : ";
                temp_id;
                if(temp_id > count)
                {
                    printf("Roll doesn't exist.");
                    break;
                }
                else
                {
                    a[count].search_student(temp_id);
                }
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}