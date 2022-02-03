#include<iostream>
using namespace std;

class Employee{
private:
    string name;
    int age;
    string qualification;
    int emp_id;
    int salary;
public:
    void getdata();
    void showdata();

};
void Employee::getdata(){
    cout<<"Enter Employee details"<<endl;
    cout << "\nEnter name : ";
    cin >> name ;
    cout << "\nEnter age : ";
    cin >> age ;
    cout << "\nEnter qualification : ";
    cin >> qualification ;
    cout << "\nEnter emp_id : ";
    cin >> emp_id ;
    cout << "\nEnter salary : ";
    cin >> salary ;
}
void Employee::showdata(){
    cout << "\nprinting employee details...\n";
    cout << "Employee record: name= " << name << ", age = " << age<<", qualification = " << qualification<< "emp_id="<<emp_id<<", salary = " << salary<<endl;

}
int main(){
    Employee e1;
    e1.getdata();
    e1.showdata();
}
